require 'rubygems'

require 'sqlite3'
# require 'text'
require_relative './lib/geocoder/us/metaphone.rb'
require_relative './lib/geocoder/us/constants.rb'

# update street table with more usefull street_phone

REFILL_MY_COLS = false

if ARGV.empty?
  warn "Missing SQLite file parameter"
  warn "\nUSAGE:\n"
  warn "./update_t [SQLite File]"
  exit
end

def measure(fn, *args) 
  startTime = Time.now
  starting = Process.clock_gettime(Process::CLOCK_MONOTONIC)
  method(fn).call(*args)
  ending = Process.clock_gettime(Process::CLOCK_MONOTONIC)
  endTime = Time.now
  elapsed = ending - starting

  puts "\n#{fn}: elspsed: #{elapsed} s,\n\tstart: #{startTime}\n\tend: #{endTime}"
end

def load_extension(db)
  helper = "./lib/geocoder/us/sqlite3.so"
      if File.expand_path(helper) != helper
        # helper = File.join(File.dirname(__FILE__), helper)
        helper = File.expand_path(helper)
      end
        db.enable_load_extension(1)
        db.load_extension(helper)
        db.enable_load_extension(0)
end

def add_col(db, colName, addColSql)
  puts "creating column: #{colName}..."
      begin
        results = db.execute addColSql
        puts results.inspect
        puts "created column: #{colName}"
      rescue SQLite3::SQLException => ex
        raise ex if not ex.message.include? "duplicate column name"

              puts "column: #{colName} already exists"
      end
end

def add_my_columns(db)
  colName = "clear_street"
  sql = "ALTER TABLE feature ADD COLUMN #{colName} VARCHAR(100);"
  add_col db, colName,sql 

  colName = "clear_street_phone"
  sql = "ALTER TABLE feature ADD COLUMN #{colName} VARCHAR(5);"
  add_col db, colName, sql 

  colName = "norm_street"
  sql = "ALTER TABLE feature ADD COLUMN #{colName} VARCHAR(100);"
  add_col db, colName,sql 
end

def fill_my_col(db, col_name,sql)
  puts "filling column: #{col_name}..."
  db.execute sql
  puts "filled column: #{col_name}, changes: #{db.changes}"
end

def fill_my_columns(db)
  sql = "update feature set clear_street = clear_my_street(street) where street is not null #{REFILL_MY_COLS ? '' : 'and clear_street is null'};"
  measure :fill_my_col, db, "clear_street", sql

  sql = "update feature set clear_street_phone = metaphone(clear_street) where clear_street is not null #{REFILL_MY_COLS ? '' : 'and clear_street_phone is null'};"
  measure :fill_my_col, db, "clear_street_phone", sql

  sql = "update feature set norm_street = normalize_my_street(street) where street is not null #{REFILL_MY_COLS ? '' : 'and norm_street is null'};"
  measure :fill_my_col, db, "norm_street", sql
end

def drop_my_indexes(db)
  sql = "DROP INDEX IF EXISTS "
  indexName = "feature_clear_street_phone_zip_idx"

      puts "dropping index: #{indexName}..."
      results = db.execute "#{sql} #{indexName};"
      puts "dropped index: #{indexName}"

  # indexName = "feature_norm_street_zip_idx"
  #     puts "dropping index: #{indexName}..."
  #     results = db.execute "#{sql} #{indexName};"
  #     puts "dropped index: #{indexName}"
end

def add_my_indexes(db)
  # TODO: verify is all indexes were duplicated for new columns

  indexName = "feature_clear_street_phone_zip_idx"
      sql = "CREATE INDEX if not exists #{indexName} ON feature (clear_street_phone, zip);"
      puts "adding index: #{indexName}..."
      results = db.execute sql
      puts "created index: #{indexName}"

  # indexName = "feature_norm_street_zip_idx"
  #     sql = "CREATE INDEX if not exists #{indexName} ON feature (norm_street, zip);"
  #     puts "adding index: #{indexName}..."
  #     results = db.execute sql
  #     puts "created index: #{indexName}"
end

    def normalize_street(string)
      tokens = string.split(' ')

      # warn "normalize base hash: #{Geocoder::US::Directional.base_hash}"
      tokens.map! do |token|
        token = Geocoder::US::Directional.base_hash[token] if Geocoder::US::Directional.base_hash.key?(token)
        token = Geocoder::US::Prefix_Qualifier.base_hash[token] if Geocoder::US::Prefix_Qualifier.base_hash.key?(token)
        token = Geocoder::US::Suffix_Qualifier.base_hash[token] if Geocoder::US::Suffix_Qualifier.base_hash.key?(token)
        token = Geocoder::US::Prefix_Canonical[token] if Geocoder::US::Prefix_Canonical.key?(token)
        token = Geocoder::US::Prefix_Alternate[token] if Geocoder::US::Prefix_Alternate.key?(token)
        token = Geocoder::US::Suffix_Canonical[token] if Geocoder::US::Suffix_Canonical.key?(token)
        token = Geocoder::US::Suffix_Alternate[token] if Geocoder::US::Suffix_Alternate.key?(token)
        token = Geocoder::US::Unit_Type.base_hash[token] if Geocoder::US::Unit_Type.base_hash.key?(token)
        
        token.downcase
      end

      tokens.join ' '
    end

    def remove_noise_words(string)
      # puts "\nstring: #{string}"
      prefix = Regexp.new("^" + Geocoder::US::Prefix_Type.regexp.source + "\s*", 
                          Regexp::IGNORECASE)
      suffix = Regexp.new("\s*" + Geocoder::US::Suffix_Type.regexp.source + "$", 
                          Regexp::IGNORECASE)
      predxn = Regexp.new("^" + Geocoder::US::Directional.regexp.source + "\s*", 
                          Regexp::IGNORECASE)
      sufdxn = Regexp.new("\s*" + Geocoder::US::Directional.regexp.source + "$", 
                          Regexp::IGNORECASE)
      good_string = string.downcase
      # puts "1 #{good_string}"

      # puts "-> #{string} -> #{good_string}"
      # puts " encoding: #{string.encoding} encoding: #{good_string.encoding}"
      good_string.force_encoding('utf-8')
      # puts " encoding: #{good_string.encoding} -> #{good_string}"

      good_string.gsub!(predxn, "")
      # puts "2 #{good_string}"
      good_string.gsub!(sufdxn, "")
      # puts "3 #{good_string}"
      good_string.gsub!(prefix, "")
      # puts "4 #{good_string}"
      good_string.gsub!(suffix, "")
      # puts "5 #{good_string}"

      good_string.strip!

      # puts "6 #{good_string}"
      return string if good_string.empty?

      good_strings = good_string.split
      # puts "7 #{good_strings}"

      good_strings.reject! {|s| s.empty?}
      # puts "8 #{good_strings}"
      # good_strings.reject! {|s| Geocoder::US::Std_Abbr.key?(s) or Geocoder::US::Name_Abbr.key?(s)}
      # puts "9 #{good_strings}"
      return good_string if good_strings.empty?

      good_strings.join " "
      # puts "10 #{good_string}"
      
      
    end

    # dbPath = "/data/geocoder-gb-1-2023-07-13-1/geocoder_kt.db"
    dbPath = ARGV[0]
    @db = SQLite3::Database.new(dbPath)
    # @db = SQLite3::Database.new(ARGV[0])
    @db.create_function("clear_my_street", 1) do |func, colValue|
      func.result = remove_noise_words colValue
    end
    @db.create_function("normalize_my_street", 1) do |func, colValue|
      func.result = normalize_street colValue
    end

    load_extension @db
    puts method(:add_my_columns)
    measure :drop_my_indexes, @db
    measure :add_my_columns, @db
    measure :fill_my_columns, @db
    measure :add_my_indexes, @db

    #     sql = "select street, street_phone, clear_street(street) cstreet, metaphone_street(clear_street(street),5) mstreet, metaphone(clear_street(street),5) mstreetC from feature where zip like '98335' order by street"
    
    #  results=  @db.execute sql
    #  # puts "results: #{results.inspect}"
    # results.each{|x|
    # puts x.inspect
    # }
    @db.close
