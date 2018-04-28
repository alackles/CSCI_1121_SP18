/*
*
*       Problem 14
*
*       Write a program to accept two numbers and print their sum. 
*
*/

#include <stdio.h>

int main() {

    float num1, num2;
    
    printf("Enter First Number: ");
    
    scanf("%f", &num1);
    
     printf("Enter Second Number: ");
    
    scanf("%f", &num2);
    
    printf("Sum: %.3f\n", num1 + num2);
    
    return 0;


}