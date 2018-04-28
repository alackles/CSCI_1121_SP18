/*
*
*   Problem 6
*
*   Accept any character and prints it in the opposite case. 
*   
*
*/

#include <stdio.h>

int caseflip(int c);

int main() {

    char k;
    
    printf("Enter character: ");
    
    scanf("%c", &k);
    
    k = caseflip(k);
    
    printf("%c\n", k);

}


int caseflip(int c) {

    if (c >= 'a' && c <= 'z') {
        return c-('a'-'A');
    }
    else if (c >= 'A' && c <= 'Z') {
        return c+('a'-'A');
    }
    else {
        return 0;
    }

}