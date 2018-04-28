/*
*
*   Problem 1
*
*   Print natural numbers from 1 to 15 in reverse order.
*   
*
*/

#include <stdio.h>

int main() {

    int i;
    
    for (i = 15; i >= 1; --i)
        printf("%d ", i);
    
    printf("\n");
    
    return 0;

}