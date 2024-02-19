# frozen_string_literal: true

require 'rubygems'
require 'sqlite3'

require_relative './lib/geocoder/us/metaphone.rb'
require_relative './lib/geocoder/us/constants.rb'

# update street table with more usefull street /street_phone columns

REFILL_MY_COLS = false # TODO: accept it as a parameter

if ARGV.empty?
  warn "Missing SQLite file parameter"
  warn "\nUSAGE:\n"
  warn "./update_t [SQLite File]"
  exit
end

def measure(fn, *args) 
  start_time = Time.now
  starting = Process.clock_gettime(Process::CLOCK_MONOTONIC)
  method(fn).call(*args)
  ending = Process.clock_gettime(Process::CLOCK_MONOTONIC)
  end_time = Time.now
  elapsed = ending - starting

  puts "\n#{fn}: elspsed: #{elapsed} s,\n\tstart: #{start_time}\n\tend: #{end_time}\n"
end

def load_extension(db)
  helper = "./lib/geocoder/us/sqlite3.so"
  if File.expand_path(helper) != helper
    # helper = File.expand_path(helper) # doesn't work inside our container 
    helper = File.join(File.dirname(__FILE__), helper)
  end
    db.enable_load_extension(1)
    db.load_extension(helper)
    db.enable_load_extension(0)
end

def add_col(db, col_name, add_col_sql)
  puts "creating column: #{col_name}..."
      begin
        results = db.execute add_col_sql
        puts results.inspect
        puts "created column: #{col_name}"
      rescue SQLite3::SQLException => ex
        raise ex if not ex.message.include? "duplicate column name"

              puts "column: #{col_name} already exists"
      end
end

def add_my_columns(db)
  col_name = "clear_street"
  sql = "ALTER TABLE feature ADD COLUMN #{col_name} VARCHAR(100);"
  add_col db, col_name,sql 

  col_name = "clear_street_phone"
  sql = "ALTER TABLE feature ADD COLUMN #{col_name} VARCHAR(5);"
  add_col db, col_name, sql 

  col_name = "norm_street"
  sql = "ALTER TABLE feature ADD COLUMN #{col_name} VARCHAR(100);"
  add_col db, col_name,sql 
end

def fill_my_col(db, col_name,sql)
  puts "filling column: #{col_name}..."
  db.execute sql
  puts "filled column: #{col_name}, changes: #{db.changes}"
end

def fill_my_columns(db)
  sql = "update feature set clear_street = clear_my_street(street) where street is not null #{REFILL_MY_COLS ? '' : 'and clear_street is null'};"
  measure :fill_my_col, db, "clear_street", sql

  sql = "update feature set clear_street_phone = metaphone(clear_street, 5) where clear_street is not null #{REFILL_MY_COLS ? '' : 'and clear_street_phone is null'};"
  measure :fill_my_col, db, "clear_street_phone", sql

  sql = "update feature set norm_street = normalize_my_street(street) where street is not null #{REFILL_MY_COLS ? '' : 'and norm_street is null'};"
  measure :fill_my_col, db, "norm_street", sql
end

def drop_my_indexes(db)
  sql = "DROP INDEX IF EXISTS "
  index_name = "feature_clear_street_phone_zip_idx"

  puts "dropping index: #{index_name}..."
  db.execute "#{sql} #{index_name};"
  puts "dropped index: #{index_name}"

  # index_name = "feature_norm_street_zip_idx"
  #     puts "dropping index: #{index_name}..."
  #     results = db.execute "#{sql} #{index_name};"
  #     puts "dropped index: #{index_name}"
end

def add_my_indexes(db)
  # TODO: verify is all indexes were duplicated for new columns

  index_name = "feature_clear_street_phone_zip_idx"
  sql = "CREATE INDEX if not exists #{index_name} ON feature (clear_street_phone, zip);"
  puts "adding index: #{index_name}..."
  db.execute sql
  puts "created index: #{index_name}"

  # index_name = "feature_norm_street_zip_idx"
  #     sql = "CREATE INDEX if not exists #{index_name} ON feature (norm_street, zip);"
  #     puts "adding index: #{index_name}..."
  #     results = db.execute sql
  #     puts "created index: #{index_name}"
end

def normalize_street(string)
  string.force_encoding('utf-8')
  tokens = string.split(' ')

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
  prefix = Regexp.new("^" + Geocoder::US::Prefix_Type.regexp.source + "\s*", 
                      Regexp::IGNORECASE)
  suffix = Regexp.new("\s*" + Geocoder::US::Suffix_Type.regexp.source + "$", 
                      Regexp::IGNORECASE)
  predxn = Regexp.new("^" + Geocoder::US::Directional.regexp.source + "\s*", 
                      Regexp::IGNORECASE)
  sufdxn = Regexp.new("\s*" + Geocoder::US::Directional.regexp.source + "$", 
                      Regexp::IGNORECASE)
  good_string = string.downcase

  good_string.force_encoding('utf-8')

  good_string.gsub!(predxn, "")
  good_string.gsub!(sufdxn, "")
  good_string.gsub!(prefix, "")
  good_string.gsub!(suffix, "")

  good_string.strip!

  return string if good_string.empty?

  good_strings = good_string.split
  good_strings.reject! {|s| s.empty?}
  # good_strings.reject! {|s| Geocoder::US::Std_Abbr.key?(s) or Geocoder::US::Name_Abbr.key?(s)}
  return good_string if good_strings.empty?

  good_strings.join " "
end

def main
  # db_path = "/data/geocoder-gb-1-2023-07-13-1/geocoder_kt.db"
  db_path = ARGV[0]

  puts "db path: #{db_path}"

  @db = SQLite3::Database.new(db_path)
  @db.create_function("clear_my_street", 1) do |func, col_value|
    func.result = remove_noise_words col_value
  end
  @db.create_function("normalize_my_street", 1) do |func, col_value|
    func.result = normalize_street col_value
  end

  load_extension @db

  measure :drop_my_indexes, @db
  measure :add_my_columns, @db
  measure :fill_my_columns, @db
  measure :add_my_indexes, @db

  @db.close
end

measure :main
