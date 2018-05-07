/*
*
*   Write a program to read an IPv4 address and check its validity.
*
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char ip[15];
    const char d[2] = ".";
    char *token;
    int ct;
    
    printf("Input IP address: ");
    scanf("%s", ip);
    
    
    // Walk through the tokens (the split parts of the strings) one at a time
    
    token = strtok(ip, d);
    
    while (token != NULL) {
        int byte = atoi(token);
        if (byte < 0 || byte > 255) {
            printf("Invalid IP: Bytes must be in [0, 255].\n");
            return 0;
        }
        token = strtok(NULL, d);
        ct++;
    }
    
    
    // If we end up with too many tokens, the IP format is wrong
    if (ct != 4) {
        printf("Invalid IP: IP must be in format xxx.xxx.xxx.xxx\n");
        return 0;
    }
    
    // If we reach this point in the program, then everything has gone okay
    printf("Valid IP address.\n");
    return 1; 

}