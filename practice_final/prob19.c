/*
*   Print a particular pattern.
*/

#include <stdio.h>

int main() {

    int rows, i, n, j;
    
    printf("Diamond Pattern Printer.\n");
    printf("Enter Diamond Width: ");
    scanf("%d", &rows);
    
    for (n = 0; n < rows; n++) {
        for (i = rows; i > n + 1; i--) {
            printf(" ");
        }
        for (i = 0; i <= n; i++) {
            printf("*");
        }
        printf("\n");
    }
    
    for (n = rows - 1; n > 0; n--) {
        for (i = 0; i < n; i++) {
            printf("*");
        }
        for (i = n; i > 0; i--) {
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
    
}