/*
*
*   Write a program to convert a natural number to multiples of 50, 20, 10, and 1.   
*
*/

#include <stdio.h>

int main() {

    int n, cur; 
    int fifty, twenty, ten, one;
    
    printf("Convert number to multiples of 50, 20, 10, and 1.\n");
    
    printf("Enter number: ");
    scanf("%d", &n);
    
    cur = n;
    
    fifty = cur/50;
    cur = cur - fifty*50;
    
    twenty  = cur/20;
    cur = cur - twenty*20; 
    
    ten = cur/10; 
    cur = cur - ten*10;
    
    one = cur;
    
    printf("50s: %d\n20s: %d\n10s: %d\n1s: %d\n", fifty, twenty, ten, one);

}