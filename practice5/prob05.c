/*
*
*   Write a program to continuously read strings <50 char
*   
*   Replace each single "*" with "**" and switch upper/lower, then print 
*
*   End when the user enters "end"
*
*/

#include <stdio.h>
#include <string.h>

#define MAX 50

int main() {

    int i, j, c, input[MAX], output[MAX*2], k, end[3] = {101, 110, 100}, check;
    
    while (1) {
    
        printf("Enter string: ");
        
        i = 0;
        j = 0; 
        
        while ((c=getchar()) != '\n') {
            input[i] = c;
            if (c >= 'a' && c <= 'z') {
                output[j] = c - 32;
            } else if (c >= 'A' && c <= 'Z') {
                output[j] = c + 32;
            } else {
                output[j] = c;
                if (c == '*') {
                    j++;
                    output[j] = c;
                }
            }
            i++;
            j++;
        }
        
        check = 0;
        
        for (k = 0; k < 3; k++) {
            if (input[k] == end[k]) {
                check++;
            }
        }
        
        if (check == 3) {
            return 0;
        }
        
        k = 0; 
        
        while (output[k]) {
            printf("%c", output[k]);
            k++;
        }
        printf("\n");
        
    
    }
    
    return 1;

}