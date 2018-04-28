/*
*
*   Write a function that takes two strings as parameters
*   and uses them as pointers to copy the second one into the first
*   
*   Write a C program to read two strings and swap their contents.
*
*   
*/

#include <stdio.h>

void copy_string(char a[], char b[]);

#define MAX 100

int main() {

    char a[MAX], b[MAX], temp[MAX];

    printf("Enter String 1: ");
    scanf("%s", a);
    
    printf("Enter String 2: ");
    scanf("%s", b);
    
    copy_string(temp, a);
    copy_string(a, b);
    copy_string(b, temp);
    
    printf("String 1: %s\n", a);
    printf("String 2: %s\n", b);

}

void copy_string(char a[], char b[]) {

    char *ptr1;
    char *ptr2;
    
    ptr1 = a;
    ptr2 = b;
    
    while (*ptr1 || *ptr2) {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }
    
}