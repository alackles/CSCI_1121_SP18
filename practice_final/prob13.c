/*
*
*   Write a program to display whether a number is positive or negative.
*
*   Use the conditional operator "?"
*
*/

#include <stdio.h>

int main() {

    int n;
    
    printf("Enter number: ");
    scanf("%d", &n);
    
    n > 0 ? printf("Positive number.\n") : n == 0 ? printf("Zero.\n"): printf("Negative Number.\n");
    
    return 0;

}