/*
*
*   Write a function that takes a character and an integer 
*   and displays the character as many times as the value of the integer.
*
*   Write a program that reads an integer & character and uses the function.
*
*/

#include <stdio.h>

void copy(char a, int x);

int main() {

    char c;
    int n;
    
    printf("What character would you like?: ");
    scanf("%c", &c);
    
    printf("How many times?: ");
    scanf("%d", &n);
    
    printf("Here you go: ");
    copy(c, n);
    printf("\n");
//     
    return 0;

}

void copy(char a, int x) {

    int i; 
    
    for (i = 0; i < x; i++) {
        printf("%c", a);
    }

}