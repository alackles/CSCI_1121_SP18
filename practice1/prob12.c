/*
*
*       Problem 12
*
*       Write a program to accept single-digit numbers and print them in words.
*
*/

#include <stdio.h>

int main(){

    int num;
    
    printf("Enter Single Digit: ");
    
    scanf("%d", &num);
    
    if (num == 0) {
        printf("Zero\n");
    }
    
    else if (num == 1) {
        printf("One\n");
    }
    
    else {
        printf("I'm a computer, I can't count that high\n");
    }
    
    return 0;

}