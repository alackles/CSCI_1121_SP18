/*
*
*   Problem 9
*
*   Accept a string in lower case & print in uppercase
*   
*
*/

#include <stdio.h>

int up(int s);

int main() {

    int c;

    while ((c=getchar()) != EOF) {
        putchar(up(c));
    }

    return 0;

}

int up(int s) {

    return s >= 'a' && s <= 'z'? s-('a'-'A'):s;

}