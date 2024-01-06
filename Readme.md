# Webserv
## DockerFile Usage

- Go to 42-toolbox directory
- - Clone it to your root directory<a href="https://github.com/alexandregv/42toolbox">Here</a> if you don't have it already

- - Run the command ```bash init_docker.sh``` to launch docker

- - Create a docker image ```docker build -t webserv .```

- - Run docker ```docker run -ti --rm -v $(PWD):/data webserv```

- - ```cd data``` to access your directory and then make/re

