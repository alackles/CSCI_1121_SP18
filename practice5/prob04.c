/*
*
*   Write a program  to read a string between 3 and 50 characters.
*   Read a character and check if the string contains the input two times in a row
*   Display the position of the first double found. 
*
*/

#include <stdio.h>

#define MIN 3
#define MAX 50

int main() {

    int n, i, len;
    char *p;
    char c, str[MAX], letter;

  do {
        n = 0;
        
        printf("Enter string between %d and %d characters. (Press ENTER when done.)\n", MIN, MAX);
        while((c=getchar()) != '\n') {
            str[n] = c;
            n++;
        }
    
    } while (n < MIN || n > MAX);
    
    printf("Enter character to check: ");
    scanf("%c", &letter);
    
    n = 0;
    i = 0;
    
    while (str[i]) {
        switch(n) {
            case 0:
                if (letter == str[i]) {
                    n++;
                }
                i++;
            case 1:
                if (letter == str[i]) {
                    printf("Double found at [%d, %d].\n", i, i+1);
                    return 1;
                    break;
                } else {
                    n = 0;
                    break;
                }
                i++;
            default:
                printf("Err.\n");
                return 0;
                break;
        }
    }
    
    printf("No doubles of %c found.\n", letter);
    
    return 0;

}
