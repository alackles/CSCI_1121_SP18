/*
*
*   Write a function that takes two strings as parameters
*   Return a pointer to the longer string   
*   If the strings are the same, return NULL
*
*   Write a C program to display longer string.
*   
*/


// identical to Problem Set 3 Question 13

#include <stdio.h>

#define MAX 100

char * longer(char a[], char b[]);

int main() {

    char a[MAX], b[MAX], *s;
    int i = 0, c;

    printf("Enter string 1: ");
    
    while ((c = getchar()) != '\n') {
        a[i] = c;
        i++;
    }
    a[i] = '\0';    // marks the end of the string
    
    printf("Enter string 2: ");
    
    i = 0;
    while ((c = getchar()) != '\n') {
        b[i] = c;
        i++;
    }
    b[i] = '\0';
    
    printf("Longer String: %s\n", longer(a,b));

}

char * longer(char a[], char b[]) {
    
    char *pt;
    int i = 0, j = 0;
    
    while (a[i]) {
        i++;
    }
    while (b[j]) {
        j++;
    }
    
    if (i == j) {
        return NULL;
    } else if (i < j) {
        pt = b;
    } else {
        pt = a;
    }
    
    return pt;

}