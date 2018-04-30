/*
*
*   Write a program using getchar() to read characters and create a string
*   String must have more than 10 characters and < 35
*   
*   If the user enters a number outside this interval, insertion should be repeated.
*
*/

#include <stdio.h>

#define MIN 5
#define MAX 50

int main() {

    int c, n;
    char str[MAX];

    do {
        n = 0;
        
        printf("Enter string between %d and %d characters. (Press ENTER when done.)\n", MIN, MAX);
        while((c=getchar()) != '\n') {
            str[n] = c;
            n++;
        }
    
    } while (n < MIN || n > MAX);

    int i;

    printf("You wrote: ");
    for(i = 0; i<= n; i++){
        printf("%c", str[i]);
    }
    printf("\n");

}
