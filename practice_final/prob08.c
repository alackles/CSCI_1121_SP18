/*
*
*   Write a program to evaluate f(x) = 0.5x^3 - xln(x)
*/

#include <stdio.h>
#include <math.h>

int main() {

    double x;
    
    printf("f(x) = 0.5*x^3 - x*ln(x)\n");
    printf("Enter x: ");
    scanf("%lf", &x);
    
    if (x > 0) {
        printf("f(x) = %.3lf\n", 0.5*pow(x,3) - x*log(x));
    } else {
        printf("f(x) undefined for values <= 0.\n");
    }
    
    return 0;

}
