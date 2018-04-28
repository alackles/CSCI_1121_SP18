/*
*
*   Read 2 integers and display the sum of the integers between them
*
*
*/

#include <stdio.h>

int max(int a, int b);
int min(int a, int b);

int main() {

    int a, b; 

    printf("\nReads two integers and displays the sum of the integers between them.\n\n");
    printf("Enter Integer 1: ");
    scanf("%d", &a);
    printf("Enter Integer 2: ");
    scanf("%d", &b);
    
    int i = min(a,b);
    int j = max(a,b);
    int n;
    
    int sum = 0;
    
    for (n = i + 1; n < j; n++) {
        sum = sum + n;
    }
    
    printf("Sum: %d\n\n", sum);

}

int max(int a, int b) {

    if (a >= b) {
        return a;
    } else {
        return b;
    }

}

int min(int a, int b) {

    if (a <= b) {
        return a;
    } else {
        return b;
    }

}