# require 'rubygems'
require_relative './lib/geocoder/us'
require 'json'
require 'pathname'

db_path = ENV["GEOCODER_DB"] 
db_path = Pathname.new(db_path).cleanpath

warn "db: #{db_path}"

db = Geocoder::US::Database.new(db_path)

addr = ARGV[0]
warn " __ addr: #{addr}"

out = db.geocode(addr)

warn "\n\nOUT: #{out.inspect}\n"

$stdout.puts out.to_json
