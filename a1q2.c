#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
    
#define BUFSIZE 256
    
// This program prints the size of a specified file in bytes
int main(int argc, char** argv) {
    // Ensure that the user supplied exactly one command line argument
    if (argc != 2) { 
        fprintf(stderr, "Please provide the address of a file as an input.\n");
        return -1;
    }

    char *cmd[] = {"wc", "-c", argv[1], NULL};
    execvp(cmd[0], cmd); 
    perror("execvp failed");
    return -1;
}
