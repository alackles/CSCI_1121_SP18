/*
*
*       Problem 16
*
*       Write a program to accept a 3-digit number and print the sum of its digits. 
*
*/

#include <stdio.h>


int main() {

    int num;
    
    int h, t, o;

    printf("Enter up to 3-Digit Number: ");
    
    scanf("%d", &num);
    
    if (num <= 999) {
        
        o = (num % 100) % 10;
    
        t = (num % 100) / 10;
    
        h = num / 100;
    
        printf("Sum of Digits: %d\n", h + t + o);
    
    }
    
    else {
    
        printf("Number is too big! Please use a smaller number.\n");
    }
    
   

}

