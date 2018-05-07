/*
*
*  Write a program to use 3 pointers to read 3 integers and check if they are in ascending order
*
*   The user should enter negative numbers.
*
*/

#include <stdio.h>

int main() {
    
    int a, b, c, *p1, *p2, *p3, err;
    
    p1 = &a;
    p2 = &b;
    p3 = &c;
    
    do {
        err = 0;
        printf("Enter 3 negative numbers: ");
        scanf("%d %d %d", p1, p2, p3);
        if (*p1 > 0 || *p2 > 0 || *p3 > 0) {
            printf("Err: All numbers must be negative.\n");
            printf("Please try again.\n");
            err = 1;
        }
    } while (err);
    
    if (*p1 < *p2 && *p2 < *p3) {
        printf("Numbers are in ascending order.\n");
    } else {
        printf("Numbers not in ascending order.\n");
    }

    return 0;

}
