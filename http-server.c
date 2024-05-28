#include <stdio.h>      // c standard input output
#include <stdlib.h>     // c standard lib
#include <string.h>     // c string lib

#include <sys/socket.h> // socket-related functions and structures
#include <netinet/in.h> // IPv4 and IPv6 structures
#include <apra/inet.h>  // functions for manipulating numeric IP addresses and port numbers

#include <unistd.h>     // provides access to the POSIX operating system API

void handle_request(int client_socket);

int main(int argc, char* argv[]){
    printf("Hello, World!\n");

    int server_socket, client_socket;

    return 0;

}
