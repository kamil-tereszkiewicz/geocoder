# require 'rubygems'
require_relative './lib/geocoder/us'
require 'json'

db_path = ENV["GEOCODER_DB"]

warn "db: #{db_path}"

db = Geocoder::US::Database.new(db_path)

addr = ARGV[0]
warn " __ addr: #{addr}"

out = db.geocode(ARGV[0])

warn "\n\nOUT: #{out.inspect}\n"

$stdout.puts out.to_json
