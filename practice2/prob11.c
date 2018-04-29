/*
*
*   Write a program that reads 8 bits and displays the corresponding integer.
*
*
*/

// this is definitely not the best way to do this

#include <stdio.h>
#include <math.h>
#include <string.h>

#define BITS 8

int main() {

    char bin[BITS];
    int i, n, base = 10, dec = 0; 

    printf("Enter Number in Binary: ");
    
    scanf("%s", bin); 
    n = strlen(bin) - 1;
    if (n > 7) {
        printf("Warning: Only first 8 bits will be counted.\n");
    }
    
    for (i = n; i >= 0; i--) {
        if (bin[i] == '1') {
            dec += pow(2, n-i);
        }
    }
    printf("Number in Base 10: %d\n", dec);
}