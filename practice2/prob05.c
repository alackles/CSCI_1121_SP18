/*
*
*     Output multiplication table
*     Force user to enter input between [1,10]
*
*/

#include <stdio.h>

int main () {

    int num;
    int run = 1;
    
    printf("Multiplication Table\n");
    
    do {
        printf("Enter an integer between 1 and 10: ");
        scanf("%d", &num);
        if (num >= 1 && num <= 10) {
            run = 0;
            for (int i = 1; i <= 10; i++) {
                printf("%d * %d = %d\n", i, num, i*num);
            }
        }
        else {
            printf("Invalid input.\n");
        }
    }   while (run == 1);

}