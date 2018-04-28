/*
*
*       Problem 15
*
*       Write a program to find the factorial of a number.
*
*/

#include <stdio.h>

int main() {

    int num, fac;
    
    printf("Enter Number: ");
    
    scanf("%d", &num);
    
    fac = num-1;
    
    for (int i = fac; i > 1; --i) {
        fac = fac*i;
    }
        
    printf("%d! = %d\n", num, fac);

}