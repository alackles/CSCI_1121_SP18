/*
*
*   Display the multiplication table from 1 to 10.  
*
*/

#include <stdio.h>

int main () {

    int i, j, k;
    
    // creates the header
    printf("\t");
    for (k = 1; k <= 10; ++k) {
        printf("%d\t", k);
    }
    printf("\n");
    
    
    // creates the multiplication table
    for (i = 1; i <= 10; ++i) {
        printf("%d\t", i);
        for (j = 1; j <= 10; ++j) {
            printf("%d\t", i*j);
        }
        printf("\n");
    }
    
}