/* 
*
*   Write a function that takes an integer n and calculates the nth term
*   of a_n = a_1 + d(n-1)
*
*   Write a c program to read an integer n and output the nth term
*/

#include <stdio.h>

double seq(double a_1, double d, int n);

int main() {

    double a_1, d;
    int n;
    
    // Let the user define the sequence instead of calculating a particular sequence
    
    printf("Calculate the nth term of the sequence a_n = a_1 + d(n-1)\n");
    
    printf("Enter a_1: ");
    scanf("%lf", &a_1);
    
    printf("Enter d: ");
    scanf("%lf", &d);
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("a_%d = %.2lf\n", n, seq(a_1, d, n));

}

// I chose to have a function that took more parameters so it is a more flexible function

double seq(double a_1, double d, int n) {
    return a_1 + d * (n-1);
    
}