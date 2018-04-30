/*
*
*   Write a program to read an integer and display the number of its digits and their sum. 
*
*/

// Identical to Problem Set 2 Question 25

#include <stdio.h>

int digsum(int a);
int digits(int a);

int main() {

    int n;
    
    printf("Enter integer: ");
    scanf("%d", &n);
    
    printf("Number of Digits: %d\n", digits(n));
    printf("Sum of Digits: %d\n", digsum(n));
    
    return 0;

}

// Calculates the number of digits of any integer in base 10
int digits(int a) {

    int i = 1, n = 0; 
    
    while (i <= a) {
        i *= 10;
        n++;
    }

    return n;
}


// I already wrote the function below and don't feel like changing it 

// Calculates the sum of the digits of any given integer in base 10
int digsum(int a) {
    
    int base = 1;
    int sum = 0;
    
    // while condition checks to see whether we have added every digit
    while (base <= a) {
        sum += (a/base) % 10;
        base *= 10;
    } 

    return sum; 
}