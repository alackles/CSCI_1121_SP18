/*
*
*   Compute largest common divisor of two positive whole numbers.
*
*/

#include <stdio.h>

int main() {

    int p, q;
    int z; 
    int rem;
    
    printf("Enter p: ");
    scanf("%d", &p);
    
    printf("Enter q: ");
    scanf("%d", &q);
    
    z = q;
    rem = p % z;
    
    while (rem != 0) {
        z = rem;
        rem = q % z;
    }
    
    printf("LCD: %d\n", z);

}