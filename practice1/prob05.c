/*
*
*   Problem 5
*
*   Accept a lowercase character and print it in capital case. 
*   
*
*/

#include <stdio.h>

int upper(int u);

int main() {

    char lower;
    
    printf("Enter lowercase character: ");
    scanf("%c", &lower);
    
    int up = upper(lower);
    
    printf("%c\n", up);

}

int upper(int u) {
    
    return u >= 'a' && u <= 'z'? u-('a'-'A'):u;

}