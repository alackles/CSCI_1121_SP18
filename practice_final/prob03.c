/*
*
*
*   Write a function that searches for a number in an array of integers.
*   If the number is found, the function should return its position, otherwise -1
*
*   Write a program that initializes an array of integers with values sorted in ascending order
*   The program should read an integer & use the function to display its position in the array.
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_LEN 20
#define MAX_STEP 4

int binsearch(int arr[], size_t len, int n);

// the question does not specify using binary search, but it seems to imply it. 

// takes an integer array of length "len" and an integer "n" to find the element

int binsearch(int arr[], size_t len, int n) {

    // set left and right bounds
    int l = 0, r = len-1;

    while (l <= r) {
        
        // sets the midpoint
        int m = l + (r-l)/2;
        
        if (arr[m] == n) {
             return m;
        }
        
        // if the number we are looking for is <= the middle number, we can ignore the left half of the array
        if (arr[m] < n) {
            l = m + 1;
            
        // otherwise we can ignore the right half of the array
        } else {
            r = m - 1;
        }
    }
    
    return -1;
    
}

int main() {

    int arr[ARR_LEN], i, num = 0, x;
    
    // generate an array of numbers with variable steps sorted in ascending order
    for (i = 0; i < ARR_LEN; i++) {
        srand(time(NULL));
        num += 1 + rand() % MAX_STEP;
        arr[i] = num;
        //printf("%d ", arr[i]);        if you want to see the array before searching
    }
    //printf("\n");
    
    printf("Enter number to search array: ");
    scanf("%d", &x);
    
    int result = binsearch(arr, ARR_LEN, x);
    if (result == -1) {
        printf("Number not found in array.\n");
    } else {
        printf("Number found at position: %d\n", result);
    }
}