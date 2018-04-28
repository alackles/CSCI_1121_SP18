/*
*
*       Problem 11
*
*       Write a C program to accept a string and count lowercase, UPPERCASE, & special
*/

#include <stdio.h>

int main() {

    int up = 0, lo = 0, sp = 0;
    
    int c;
    
    while ((c = getchar()) != EOF) {
    
        if (c >= 'a' && c <= 'z') {
            ++lo;
        }
        else if (c >= 'A' && c <= 'Z') {
            ++up;
        }
        
        else {
            ++sp;
        }
    }
    
    printf(" up: %d\n lo: %d\n sp: %d\n", up, lo, sp);
    
    return 0;

}