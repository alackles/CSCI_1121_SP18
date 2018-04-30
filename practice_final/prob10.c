/*
*
*   Write a program to read a 2-digit positive integer and duplicate its digits.
*
*/

#include <stdio.h>

#define DIGITS 2

int main() {

    char num[DIGITS];
    int i;
    
    printf("Enter %d-digit integer: ", DIGITS);
    scanf("%s", num);
    
    printf("Duplicated: ");
    
    for (i = 0; i < DIGITS; i++) {
        printf("%c%c", num[i], num[i]);
    }
    printf("\n");
    
    return 0;

}