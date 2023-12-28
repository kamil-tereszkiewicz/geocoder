require 'rubygems'
require_relative './lib/geocoder/us'
require 'json'

db = Geocoder::US::Database.new("/data/geocoder-gb-1-2023-07-13-1/geocoder.db")

addr = ARGV[0]
$stderr.puts "addr: #{addr}"

out = db.geocode(ARGV[0])

$stderr.puts "\n\nOUT: #{out.inspect}\n"

$stdout.puts out.to_json


