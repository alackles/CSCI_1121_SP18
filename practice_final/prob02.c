/*
*
*   Write a function that calculates 1^4 + 2^4 + ... + n^4
*
*   Write a program that reads a positive integer up to 1000 and displays the result.
*
*/

#include <stdio.h>
#include <math.h>

int fourthsum(int n);

int main() {

    int n;
    
    printf("Calculate 1^4 + 2^4 + ... + n^4.\n");
    
    do {
        printf("Enter integer: ");
        scanf("%d", &n);
        
        if (n <= 0) {
            printf("Number must be positive. Try again.\n");
        } else if (n > 1000) {
            printf("Number must be less than 1000. Try again.\n");
        }

    } while (n <= 0 || n > 1000 );
    
    printf("Sum of Fourth Powers: %d\n", fourthsum(n));
}


int fourthsum(int n) {

    int i, sum = 0;
    
    for (i = 1; i <= n; i++) {
        sum += pow(i, 4);
    }

    return sum; 
    
}