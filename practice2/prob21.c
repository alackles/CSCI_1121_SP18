/*
*
*   Write a program that reads and displays integers until the user enters 0
*
*/


#include <stdio.h>

int main() {

    int n; 
    
    printf("Enter integers.\n");
    
    do {
        printf("Number: ");
        scanf("%d", &n);
        if (n) {
            printf("You wrote: %d\n", n);
        }
    } while (n);
    
    return 0;

}