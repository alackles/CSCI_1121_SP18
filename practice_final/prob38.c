/*
*
*   Write a C program to read a string of <16 characters, and if it ends with ee, display in reverse order
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define MAX_CHAR 16

int main() {

    char str[MAX_CHAR];
    int end, i;
    
    printf("Enter string: ");
    scanf("%s", str);
    
    end = strlen(str) - 1;
    
    if (str[end] == 'e' && str[end-1] == 'e') {
        printf("Reverse String: ");
        for (i = end; i >= 0; i--) {
            printf("%c", str[i]);
        }
        printf("\n");
    } else {
        printf("Thanks!\n");
    }
    
    return 0;
    

}