/*
*
*   Write two functions that take an integer parameter
*   and return the square and cube of this number.
*
*   Write a C program which reads an integer
*   and uses the functions to display the sum of the square & cube
*/

#include <stdio.h>

int square(int a);
int cube(int a);

int main() {
    
    int a;
    
    printf("Enter an Integer: ");
    scanf("%d", &a);
    
    printf("Sum of Square and Cube: %d\n", square(a) + cube(a));
}


int square(int a) {
	return a*a;
}

int cube(int a) {
    return a*a*a;
}

