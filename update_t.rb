require 'rubygems'

require 'sqlite3'
# require 'text'
require_relative './lib/geocoder/us/metaphone.rb'
require_relative './lib/geocoder/us/constants.rb'

# update street table with more usefull street_phone

# if(ARGV.length < 1)
# print "Missing SQLite file parameter"
# printf "\nUSAGE:\n"
# print """./update_t [SQLite File]
# """
# exit
# end


def load_extension db
      helper = "./lib/geocoder/us/sqlite3.so"
      if File.expand_path(helper) != helper
        helper = File.join(File.dirname(__FILE__), helper)
      end
        db.enable_load_extension(1)
        db.load_extension(helper)
        db.enable_load_extension(0)
end

def addMyColumns db
    def _addCol db, colName, addColSql
          puts "creating column: #{colName}..."
          begin
          results = db.execute addColSql
          puts results.inspect
          puts "created column: #{colName}"
          rescue  SQLite3::SQLException => ex
                raise ex if not ex.message.include? "duplicate column name"

                puts "column: #{colName} already exists"
          end
    end


    colName = "clear_street"
    sql = "ALTER TABLE feature ADD COLUMN #{colName} VARCHAR(100);"
    _addCol db, colName,sql 

    colName = "clear_street_phone"
    sql = "ALTER TABLE feature ADD COLUMN #{colName} VARCHAR(5);"
    _addCol db, colName, sql 
end



def fillNewMyColumns db
      sql = "update feature set clear_street = clear_my_street(street) where street is not null;"
      puts "filling column: clear_street..."
      results =  db.execute sql
      puts "filled column: clear_street: #{db.changes}"
      sql = "update feature set clear_street_phone = metaphone(clear_street) where clear_street is not null;"
      
      puts "filling column: clear_street_phone..."
      results =  db.execute sql
      puts "filled column: clear_street_phone: #{db.changes}"
end



def addMyIndexes db

      indexName = "feature_clear_street_phone_zip_idx"
      sql = "CREATE INDEX if not exists #{indexName} ON feature (clear_street_phone, zip);"

      puts "adding index: #{indexName}..."
      results =  db.execute sql
      puts "created index: #{indexName}"
end

    def remove_noise_words(string)
      # puts "\nstring: #{string}"
      prefix = Regexp.new("^" + Geocoder::US::Prefix_Type.regexp.source + "\s*", Regexp::IGNORECASE)
      suffix = Regexp.new("\s*" + Geocoder::US::Suffix_Type.regexp.source + "$", Regexp::IGNORECASE)
      predxn = Regexp.new("^" + Geocoder::US::Directional.regexp.source + "\s*", Regexp::IGNORECASE)
      sufdxn = Regexp.new("\s*" + Geocoder::US::Directional.regexp.source + "$", Regexp::IGNORECASE)
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

      good_string = good_strings.join " "
# puts "10 #{good_string}"
      
      return good_string
    end

dbPath = "/data/geocoder-gb-1-2023-07-13-1/geocoder_kt.db"
    @db = SQLite3::Database.new(dbPath)
    # @db = SQLite3::Database.new(ARGV[0])
    @db.create_function("clear_my_street", 1) do |func, colValue|
      func.result = remove_noise_words colValue
    end

    load_extension @db
    addMyColumns @db
    fillNewMyColumns @db
    addMyIndexes @db

#     sql = "select street, street_phone, clear_street(street) cstreet, metaphone_street(clear_street(street),5) mstreet, metaphone(clear_street(street),5) mstreetC from feature where zip like '98335' order by street"
    
#  results=  @db.execute sql
#  # puts "results: #{results.inspect}"
# results.each{|x|
# puts x.inspect
# }
    @db.close


