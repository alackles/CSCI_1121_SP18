/*
*
*   Write a program that reads integers and displays "Greetings" equal to the input.
*   If a negative number is input, end the program and display the total number of greets.
*
*   Use only while loops.
*
*/

#include <stdio.h>

int main() {

    int i, n = 0, total = 0;
    
    while (n >= 0) {
        total += n;
        i = 0;
        printf("Enter number: ");
        scanf("%d", &n);
        while (i < n) {
            printf("Greetings ");
            i++;
        }
        printf("\n");
    } 

    printf("Total Greetings: %d\n", total);
}