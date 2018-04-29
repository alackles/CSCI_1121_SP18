/* 
*
*   Write a program to solve for ky + n + m = 0
*
*/

#include <stdio.h>

int main() {

    double k, y, n, m;
    
    // I interpreted y as a single variable. i.e. f(y) = y
    
    printf("Solve for y in ky + n + m = 0.\n");
    printf("Enter coefficients.\n");
    
    printf("k: ");
    scanf("%lf", &k);
    
    printf("n: ");
    scanf("%lf", &n);
    
    printf("m: ");
    scanf("%lf", &m);
    
    if (k == 0) {
        if (n == -m) {
            printf("Infinite solutions.\n");
        } else {
            printf("No solutions.\n");
        }
    } else {
        y = (m-n)/k;
        printf("y = %.4lf\n", y);
    }

}