#!/bin/bash

echo "start: $(date)"

export GEOCODER_DB="../geocoder.db"

folder="./delme/"

# example: ./run.sh aa.csv

# rm -rf geo* a_g* aa_g* geoLog* my_address_file_geo*
echo "removing: ${folder}geoLog*"
rm -rf ${folder}geoLog*

echo "old files cleared, generating..."

# podman run --rm -v /data/dlakamila:/tmp -v /data/:/data:z mygeo:latest $1 all

# echo "setting privilages to generated files..."

# find . -type f -name "*.csv" -exec chmod 777 {} \;
# find . -type f -name "*.log" -exec chmod 777 {} \;

Rscript ./entrypoint.R "${folder}$1" all --debug
# Rscript ./entrypoint.R "${folder}$1" --debug
# Rscript ./entrypoint.R "${folder}$1"
# Rscript ./entrypoint.R "${folder}$1" all
echo "done: $(date)"
