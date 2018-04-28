/*
*
*   Write a program that reads a positive integer n and verifies the math formula
*   n^2 = sum of odds <= (2n-1)
*
*/

#include <stdio.h>

int main() {

    int n, i, oddsum = 0, square;
    
    printf("Enter positive integer n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        oddsum += 2*i - 1;
    }
    
    square = n*n;
    
    if (oddsum == square) {
        printf("Sum from i = 1 to %d for (2(i)-1) = %d\n", n, oddsum);
        printf("%d^2 = %d\n", n, square);
        printf("Verified.\n");
    } else {
        printf("Sorry something's gone wrong.\n");
    }
    
    

}