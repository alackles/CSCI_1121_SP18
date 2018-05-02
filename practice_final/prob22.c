/*
*   Write a program to read an integer and display the digits that appear more than once.
*   Also add number of appearances.
*
*   If no digit appears more than once, display a message about it. 
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLEN 100

int main() {
    
    char num[MAXLEN], dig, c; 
    int digcount[10] = {0}, i;
    
    printf("Enter integer: ");
    scanf("%s", num);
    
    // reads the number as an array of characters & checks if characters match
    // then converts the characters to integers in order to store them in the right spot of digcount
    
    for (i = 0; i < strlen(num); i++) {
        for (c = '0'; c <= '9'; c++) {
            if (num[i] == c) {
                digcount[atoi(&c)]++;
                break;
            }
        }
    }
    
    int found = 0;
    
    printf("Repeated Digits: \n");
    for (i = 0; i <= 9; i++) {
        if (digcount[i] > 1) {
            printf("%d (%d times)\n", i, digcount[i]);
            found = 1;
        } 
    }
    if (!found) {
        printf("None.\n");
    }
    
    

    return 0;
}