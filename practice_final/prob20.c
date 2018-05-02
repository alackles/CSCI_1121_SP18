/*
*   Write a program to read 100 integers and display the 2 highest values (distinct).
*/

#include <stdio.h>

#define NUM 100

int main() {

    int arr[NUM], i, max1 = 0, max2 = 0;
    
    printf("Enter Integers (space delimited): ");

    for (i = 0; i < NUM; i++) {
        scanf("%d", &arr[i]);
    }
    
    max1 = max2 = arr[0];
    
    for (i = 1; i < NUM; i++) {
        if (arr[i] > max1) {
            if (arr[i] > max2) {
                max2 = max1;
            }
            max1 = arr[i];
        }
    } 
    
    printf("Highest Value: %d\n", max1); 
    if (max1 != max2) {
        printf("Second Highest: %d\n", max2);
    } else {
        printf("All values same; no second highest value.\n");
    }
    
    return 0;
    
}
