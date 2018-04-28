/*
*
*   Write a function that takes as parameters a character
*   and uses the switch statement to return the same character
*   if it is 'a', 'b', or 'c'. 
*
*   Write a C program to read a character, call the function,
*   and display the return value. 
*
*/

#include <stdio.h>

char read(char x);

int main() {
    
    char x;
    printf("Enter a Character: ");
    x = getchar();

    printf("Output: %c\n", read(x));
}

char read(char x) {

    switch(x) {
        case 'a': case 'b': case 'c':
            return x;
            break;
        default:
            return 'z';
    }
}