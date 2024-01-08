# Webserv
## DockerFile Usage

- Go to 42-toolbox directory
- - Clone it to your root directory <a href="https://github.com/alexandregv/42toolbox">Here</a> if you don't have it already

- - Run the command ```bash init_docker.sh``` to launch docker

- - Create a docker image ```docker build -t webserv .```

- - Run docker ```docker run -ti --rm -v $(PWD):/data webserv```

- - ```cd data``` to access your directory and then make/re

## Roadmap
Step 1: Parse Configuration File

    - Read and parse the configuration file specified as an argument or using a default path.
    - Extract information such as port, host, server names, default error pages, client body size limit, and route configurations.

Step 2: Set Up Server Socket

    - Use the socket function to create a server socket.
    - Use the bind function to associate the socket with the specified port and host.
    - Use the listen function to make the socket ready to accept incoming connections.

Step 3: Implement Non-blocking I/O

    - Use poll, select, or another equivalent function to implement non-blocking I/O for both reading and writing.
    - Ensure that the server doesn't block and can handle multiple connections simultaneously.

Step 4: Accept Client Connections

    - Use the accept function to accept incoming client connections.
    - Handle each client connection independently.

Step 5: Parse HTTP Requests

    - Implement a parser to extract information from incoming HTTP requests.
    - Extract HTTP method, headers, URL, and other relevant information.

Step 6: Process Routes and Handle Requests

    - Based on the parsed URL, determine the appropriate route from the configuration file.
    - Handle different route configurations, such as HTTP methods, redirections, file directories, directory listing, default files, CGI execution, and file uploads.

Step 7: Static Content Handling

    - Implement logic to serve static content by reading and sending files.
    - Handle directory listing based on configuration.

Step 8: Dynamic Content (CGI)

    - Identify requests that require CGI execution based on file extensions (e.g., .php).
    - Set up the environment for CGI execution and handle input/output accordingly.
    - Use fork to create a new process for CGI execution.

Step 9: Error Handling

    - Implement logic to handle and respond to various HTTP status codes.
    - Use default error pages if none are provided in the configuration.

Step 10: Stress Testing

    - Test your server under different scenarios to ensure it stays available and responsive.
    - Evaluate its performance and address any bottlenecks or issues.

Step 11: Multiple Ports and Hosts

    - Implement logic to handle multiple ports and hosts based on the configuration file.