/*
*
*   Use a C function to take an integer paremeter and return 13 + 23 + ... + n3  
*
*   Write a C program to read a positive integer up to 17 and display the result. 
*
*/

#include <stdio.h>

#define MAX 17

// returns 13 + 23 + ... + n3


// recursive function
int threesum(int n) {

    if (n >= 1) {
        return n*10 + 3 + threesum(n-1);
    }
    return 0;

}

int main() {

    int n, err;
    
    printf("Add 13 + 23 + ... + n3\n");
    
    do {
        err = 0;    
        printf("Enter integer: ");
        scanf("%d", &n);
        if (n < 1 || n > 17) {
            printf("Err: Number must be in [1, 17].\n");
            err = 1;
        }
    } while (err);
    
    printf("Sum: %d\n", threesum(n));
    
    return 0;

}