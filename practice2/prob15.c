/*
*
*   Determine whether a number is prime or not. 
*
*/

#include <stdio.h>
#include <math.h>

int isprime(int n);

int main() {

    int n;
    
    printf("Enter number: ");
    scanf("%d", &n);
    
    printf("%d is ", n);
    if ( !(isprime(n)) ) {
        printf("not ");
    }
    printf("prime.\n");

}
 
int isprime(int n) {

    int i; 

    if (n <= 1) {
        return 0;
    }
    
    if (n == 2) {
        return 1;
    }
    
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    
    return 1; 
    
    

}