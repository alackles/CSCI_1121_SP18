/*
*
*   Write a function that takes as parameters two pointers to floats
*   and swaps the values they point to
*
*   Write a C program that reads two floats
*   and uses the function to swap them 
*
*/

#include <stdio.h>

void swap(float *a, float*b);

int main() {

    float a, b;
        
    printf("Enter Float 1: ");
    scanf("%f", &a);
    
    printf("Enter Float 2: ");
    scanf("%f", &b);
    
    swap(&a, &b);
    
    printf("Float 1: %.3f\nFloat 2: %.3f\n", a, b);
}

void swap(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}