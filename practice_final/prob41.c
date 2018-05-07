/*
*
*   Write a void function that takes the coefficients of a quadratic and returns real roots
*
*   Write a program that reads the coefficients and uses a fcn to solve the equation
*   Force a non-zero value for a.
*
*/

#include <stdio.h>
#include <math.h>

void roots(double a, double b, double c);

void roots(double a, double b, double c) {

    double d = b*b - 4*a*c;
    
    if (d > 0) {
        printf("Root 1: %.4lf\n", (-b + sqrt(d))/(2*a));
        printf("Root 2: %.4lf\n", (-b - sqrt(d))/(2*a));
    } else if (d == 0) {
        printf("Root: %.4lf\n", -b/(2*a));
    } else {
        printf("No real roots.\n");
    }

}

int main() {

    double a, b, c;
    
    printf("Enter coefficients of polynomial ax^2 + bx + c to find roots.\n");
    
    do {
        printf("a: ");
        scanf("%lf", &a);
        if (a == 0) {
            printf("Err: a cannot be 0. Try again.\n");
        }
    } while (a == 0);
    
    printf("b: ");
    scanf("%lf", &b);
    
    printf("c: ");
    scanf("%lf", &c);
    
    roots(a, b, c);
    
    return 0;

}

