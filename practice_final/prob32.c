/*
*
*
*   Read a double number and display its fractional part.
*
*/

#include <stdio.h>

int main() {
    
    double n;
    
    printf("Enter double number: ");
    scanf("%lf", &n);
    
    int k = n;
    double frac = n - k;
    
    printf("Fractional part: %lf\n", frac);

    return 0;
    
}