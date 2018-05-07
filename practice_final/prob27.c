/*
*
*   Given integer values x, y generate 20 random values in the interval.
*   Put them in an array. 
*   Determine the index of the largest even negative number.
*   Calculate the sum of positive odd numbers.
*
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int randints(int x, int y);
int isodd(int n);

int main() {

    int x, y, arr[SIZE];
    int i, n;
    
    int neg = 0, sum = 0, index;
    
    // Take in values of x and y
    do {
        if (x > y) {
            printf("x must be <= y.\n");
        }
        printf("Enter x: ");
        scanf("%d", &x);
        printf("Enter y: ");
        scanf("%d", &y);
    } while (x > y);
    
    // Initialize the array
    for (i = 0; i < SIZE; i++) {
        arr[i] = randints(x, y);
    }
    
    
    // Our only run through the array is during this for loop
    // Opening and closing [ ] are for array printing purposes
    printf("[");
    for (i = 0; i < SIZE; i++) {
        n = arr[i];
        
        // Printing the array in a readable format
        printf("%d", n);
        if (i < SIZE-1) {
            printf(", ");
        }
        
        // Adding all positive odd numbers to the sum
        if (isodd(n) && (n > 0)) {
            sum += n;
        }
        
        // Finding the largest negative integer
        if ((n < neg) && !isodd(n)) {
            neg = n;
            index = i;
        }
    }
    printf("]\n");
    
    // Return requested values. 
    printf("Sum of Odd Positive Integers: %d\n", sum);
    if (neg) {
        printf("Largest (magnitude) Even Negative Number at Position: %d\n", index);
    } else {
        printf("No even negative numbers found.\n");
    }
    
    return 0;
    
}

// generate random integer between specified x and y (where x <= y)
int randints(int x, int y) {
    int j = y - x;
    return x + rand() % (j+1);
}

// determine whether a number is odd
int isodd(int n) {
    if(n % 2) {
        return 1;
    } else {
        return 0;
    }
}