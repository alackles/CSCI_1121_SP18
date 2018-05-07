/*
*
*
*   Compute and print explicitly the roots of x^2 + 2x - 4 = 0
*
*
*
*/

// more generalized

#include <stdio.h>
#include <math.h>

int main() {

    double a = 1, b = 2, c = -4;
    double root1, root2;
    
    printf("Quadratic equation solver.\n");
    printf("Solving: %.2lfx^2 + %.2lfx + %.2lf = 0\n", a, b, c);
    
    root1 = (-b + sqrt(pow(b,2) - 4*a*c))/(2*a);
    root2 = (-b - sqrt(pow(b,2) - 4*a*c))/(2*a);
    
    printf("Root 1 = %.2lf\nRoot 2 = %.2lf\n", root1, root2);
    
    return 0;
    
    
}