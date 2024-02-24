FROM docker.io/rocker/r-ver:4.1.2
# FROM rocker/r-ver:4.3.2 - problem with apt update/install probably due to too low version of docker/podman??

# DeGAUSS container metadata
ENV degauss_name="geocoder"
ENV degauss_version="3.3.0"
ENV degauss_description="geocodes"
ENV degauss_argument="valid_geocode_score_threshold [default: 0.5]"

# add OCI labels based on environment variables too
LABEL "org.degauss.name"="${degauss_name}"
LABEL "org.degauss.version"="${degauss_version}"
LABEL "org.degauss.description"="${degauss_description}"
LABEL "org.degauss.argument"="${degauss_argument}"

#ADD https://geomarker.s3.amazonaws.com/geocoder_2021.db /opt/geocoder.db
# COPY geocoder.db /opt/geocoder.db

# TODO: ruby version: 
# rocker/r-ver:4.1.2 is based on ubuntu 20, and ruby-full will install ruby version 2.7.
RUN apt-get update && apt-get install -y \
    libssl-dev \
    libssh2-1-dev \
    libcurl4-openssl-dev \
    libxml2-dev \
    make \
    sqlite3 \
    libsqlite3-dev \
    flex \
    ruby-full \
    bison \
    gnupg \
    software-properties-common \
    && apt-get clean


## start ruby version: to use ruby 3.3.3 or whatever version needed comment ruby-full and use following
# RUN apt-get update && apt-get install -y \
#     libssl-dev \
#     libssh2-1-dev \
#     libcurl4-openssl-dev \
#     libxml2-dev \
#     make \
#     sqlite3 \
#     libsqlite3-dev \
#     flex \
#     bison \
#     gnupg \
#     software-properties-common \
#     curl libreadline-dev zlib1g-dev autoconf bison build-essential libyaml-dev libreadline-dev libncurses5-dev libffi-dev libgdbm-dev && apt-get clean

# ADD https://cache.ruby-lang.org/pub/ruby/3.3/ruby-3.3.0.tar.gz /home/
# WORKDIR /home/
# RUN tar -xzf /home/ruby-3.3.0.tar.gz
# # RUN ls -la
# WORKDIR /home/ruby-3.3.0
# RUN ./configure && make && make install
# WORKDIR /

# RUN ruby --version
## end for ruby version

RUN gem install sqlite3 json Text

# install required version of renv
RUN R --quiet -e "install.packages('remotes', repos = 'https://packagemanager.rstudio.com/all/__linux__/focal/latest')"
RUN R --quiet -e "remotes::install_github('rstudio/renv@0.15.4')"

COPY renv.lock .
RUN R --quiet -e "renv::restore()"
