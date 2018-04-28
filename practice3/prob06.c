/*
*
*   Write a function that takes an integer and returns
*   the result 1^3 + 2^3 + ... + n^3.
*
*   Write a C program that reads a positive integer up to 1000
*   and uses the function to display the result of the expression.
*
*/

#include <stdio.h>

int cubesum(int n);

int main() {

    int n;
    
    printf("Find the sum of cubes up to integer n.\n");
    printf("Enter an Integer: ");
    scanf("%d", &n);
    
    if (n >= 1 && n <= 1000) {
        printf("Sum of Cubes: %d\n", cubesum(n));
    } else {
        printf("Number invalid; must be within [1, 1000].\n");
    }
    
    return 0;

}

int cubesum(int n) {

    int sum = 0;
    int i;
    
    for (i = 1; i <= n; ++i) {
        sum += i*i*i;
    }
    
    return sum;

}