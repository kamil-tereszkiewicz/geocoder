require 'rubygems'
require_relative './lib/geocoder/us'
require 'json'

dbPath = "/data/geocoder-gb-1-2023-07-13-1/geocoder_kt.db"
db = Geocoder::US::Database.new(dbPath)

addr = ARGV[0]
$stderr.puts " __ addr: #{addr}"

out = db.geocode(ARGV[0])

$stderr.puts "\n\nOUT: #{out.inspect}\n"

$stdout.puts out.to_json


