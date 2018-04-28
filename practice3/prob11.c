/*
*
*   Write a function that returns string length w/o strlen()
*
*/

#include <stdio.h>

#define MAX 1000
int length(char str[]);

int main() {

    char str[MAX];

    printf("Input string (no spaces allowed): ");
    scanf("%s", str);
    
    printf("Length: %d\n", length(str));
}

int length(char str[]) {
    
    int i;
    
    while (str[i]) {
        i++;
    }
    
    return i;

}
