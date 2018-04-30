/*
*
*   Write a program to convert decimal numbers to binary in [0, 255]
*
*   Enter numbers continuously; for outside [0, 255], should terminate.
*
*/

// Identical to Problem Set 2 Question 26

#include <stdio.h>

#define BITS 8

int main() {

    int bin[BITS] = {0}, dec = 0, n, i;
    
    while (1) {
        
        printf("Enter number in decimal: ");
        scanf("%d", &dec);
        
        if (dec < 0 || dec > 255) {
            break;
        }
        
        n = dec;
        i = BITS-1; 
        
        while (n/2 || n % 2) {
            bin[i] = n % 2;
            n = n/2;
            i--;
        }
        
        printf("Binary: ");
        for (i = 0; i < BITS; i++) {
            printf("%d", bin[i]);
            bin[i] = 0;
        }
        printf("\n");
    }
    
    

}