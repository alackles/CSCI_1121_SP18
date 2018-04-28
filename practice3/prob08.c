/*
*
*   Write a function power(double a, int b) to return a^b
*   
*   Write a C program that reads in a float & integer and use the function
*   to display a^b.
*
*/

#include <stdio.h>

double power(double a, int b);

int main() {

    double a;
    int b;
    
    printf("Find a^b\n");
    printf("Integer values of b only.\n");
    
    printf("Enter a: ");
    scanf("%lf", &a);
    
    printf("Enter b: ");
    scanf("%d", &b);
    
    printf("a^b = %.3lf\n", power(a,b));
    return 0;
}

double power(double a, int b) {

    int i;
    double p = 1;
    
    for (i = 1; i <= b; i++) {
        p *= a;
    }
    
    return p;

}