# Useful developer commands od notes

> TODO: oneliner here

! `entrypoint.R` ensure: parallel and cache is set to TRUE, and the stderr is not forwarded

## Build images

The `./.Dockerfile` was split into two files: `./from.Dockerfile` and `./my.Dockerfile` to save time on reinstalling all of the stuff. The `./from.Dockerfile` needs to be build just once, then we can just rebuild the `./my.Dockerfile` image to be able to run modified ruby/R code.

> TODO: prepare command to build both images in one go.

### build `./from.Dockerfile`

`podman build -t myfromgeo -f ./from.Dockerfile`

<!-- `podman build -t mygeo -f ./my.Dockerfile`
`podman rmi -f  $(podman  images -f "dangling=true" -q)` -->

### build `./my.Dockerfile`

This command build image and removes *dangling* (useless) images.

`podman build --build-arg geo_db="../geocoder.db" -t mygeo -f ./my.Dockerfile && podman rmi -f  $(podman  images -f "dangling=true" -q)`

## Geocode addresses from csv file: 

### optionally clear old output files
 
`rm -rf geo* *_geocoder*_score_threshold* stderr*`

### run geocoder from the created image

`podman run --rm -v $PWD:/tmp -v /data/:/data:z mygeo:latest a.csv all`

<!-- Add -a after run to attach to the container. Optionally specify stdout/stderr/stdin. -->

Add `-it` to attach and allocate pseudo -TTY (this will allow to see output and interact with container)

`podman run -it --rm -v $PWD:/tmp -v /data/:/data:z mygeo:latest a.csv all`

## Update db: `update_t.rb`

1. To create and fill new street columns modify `./my.Dockerfile`:

```dockerfile
# ENTRYPOINT ["/app/entrypoint.R"]
ENTRYPOINT ["ruby", "/app/update_t.rb", "/path_to/the_db/file.db"]
```

 - if you need to re-run the process on a db that already has new tables, then modify: `./update_t.rb`:

```ruby
# REFILL_MY_COLS = false
REFILL_MY_COLS = true # or !false
```

> TODO: can we replace ENTRYPOINT with CMD or could we override ENTRYPOINT using podman --run --entrypoint... instead of modifying the dockerfile to be able update db?

2. Build image as usual.
3. Run the container in the same way as when running geocoder against csv file (don't bother about passed args, they will be ignored).
4. Reverse changes in the dockerfile, rebuild image. - Now you can run geocoder.

## Others

Following is useful only when we would like modify or run something without switching to root.

`find . -type f -name "*" -exec chmod 777 {} \;`