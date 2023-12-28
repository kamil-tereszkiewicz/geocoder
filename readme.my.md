`find . -type f -name "*" -exec chmod 777 {} \;`

`podman build -t myfromgeo -f ./from.Dockerfile`

<!-- `podman build -t mygeo -f ./my.Dockerfile`
`podman rmi -f  $(podman  images -f "dangling=true" -q)` -->

`podman build -t mygeo -f ./my.Dockerfile && podman rmi -f  $(podman  images -f "dangling=true" -q)`

# ------------ @47.2992099,-122.5785739

`rm -rf geo* a_g* stderr* my_address_file_geo*`
`podman run --rm -v $PWD:/tmp -v /data/:/data:z mygeo:latest a.csv all`