/*
*
*   Problem 8
*
*   Accept a string and print it out.
*   
*
*/


#include <stdio.h>

#define MAXSTRING 1000

int main() {

    char s[MAXSTRING]; 
    
    printf("Shout into the cave: ");
    
    scanf("%[^\n]", s);
    
    printf("The cave shouts back: %s\n", s);
    
    return 0;

}