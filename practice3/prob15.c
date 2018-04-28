/*
*
*   Write a function that takes two strings as parameters
*   and returns 1 if the second string is contained in the end of the first.
*   Otherwise return 0
*
*   Write a C program to read two strongs of <50 char and utilize above fcn.
*
*   
*/

#include <stdio.h>

#define MAX 50
int contains(char a[], char b[]);


int main() {

    char a[MAX], b[MAX];
    int c, i = 0;
    
    printf("Check if String 2 is contained in the end of String 1.\n");
    
    printf("Enter String 1: ");
    
    while ((c = getchar()) != '\n') {
        a[i] = c;
        i++;
    }
    a[i] = '\0';
    
    i = 0;
    
    printf("Enter String 2: ");

    while ((c = getchar()) != '\n') {
        b[i] = c;
        i++;
    }
    b[i] = '\0';
    
    printf("%s is ", b);
    if (!contains(a, b)) {
        printf("not ");
    }
    printf("contained in the end of %s.\n", a);
    
}

int contains(char a[], char b[]) {

    int len1 = 0, len2 = 0, i, j;
    
    char *p; 
    
    p = a;
    
    // count the lengths
    while (*p++) {
        len1++;
    }
    p = b;
    
    while (*p++) {
        len2++;
    }
    
    if (len1 < len2) {
        return 0;
    } else if (len2 == 0) {
        return 1;
    }
    
    i = len1 - 1; 
    for (j = len2 - 1; j >= 0; j--) {
        if (a[i] != b[j]) {
            return 0; 
        }
        i--;
    }
    
    return 1;

}