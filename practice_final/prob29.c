/*
*
*   Write a function that takes as parameters two pointers to floats
*   and swaps the values they point to
*
*   Then output the largest and smallest value.
*
*/

#include <stdio.h>

void swap(float *a, float*b);

int main() {

    float a, b, temp, *ptr1, *ptr2;
    
    ptr1 = &a;
    ptr2 = &b;
        
    printf("Enter Float 1: ");
    scanf("%f", ptr1);
    
    printf("Enter Float 2: ");
    scanf("%f", ptr2);
    
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    

    if (*ptr1 > *ptr2) {
        printf("Largest: %f\n", a);
        printf("Smallest: %f\n", b);
    } else {
        printf("Largest: %f\n", b);
        printf("Smallest: %f\n", a);
    }
    
    
    return 0;
}