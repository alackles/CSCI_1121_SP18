/*
*   Display the largest positive integer n for which 
*   1^2 + 2^2 + 3^2 + ... + n^2 < given integer.
*
*/

#include <stdio.h>

int main() {

    int n = 1, k, sum = 0;
    
    printf("Enter integer: ");
    scanf("%d", &k);
    
    while (1) {
        sum += n*n;
        if (sum >= k) {
            printf("Largest n: %d \n", n-1);
            break;
        } else {
            n++;
        }
    }

}