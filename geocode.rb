require 'rubygems'
require_relative './lib/geocoder/us'
require 'json'

# dbPath = "/data/geocoder-gb-1-2023-07-13-1/geocoder_kt.db"
# dbPath = "../geocoder.db"
#db_path = '/mnt/c/geocoder.db'
db_path = '../geocoder.db'
db = Geocoder::US::Database.new(db_path)

addr = ARGV[0]
warn " __ addr: #{addr}"

out = db.geocode(ARGV[0])

warn "\n\nOUT: #{out.inspect}\n"

$stdout.puts out.to_json
