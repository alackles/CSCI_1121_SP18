/*
*
*  Accept 15 digits and then a number, and tells you the position of the number in the set
*
*   Tell position of the number in the set or tells you it is not in the set.
*
*/


#include <stdio.h>
#include <stdlib.h>

#define NUMS 5


// performs a linear search to find first occurance
int linsearch(int arr[], size_t len, int n);

int linsearch(int arr[], size_t len, int n) {

    int i;
    
    for (i = 0; i < len; i++) {
        if (arr[i] == n) {
            return i;
        }
    }
    
    return -1;
}

int main() {

    int i, n, arr[NUMS];
    
    printf("Enter %d Numbers (space delimited): ", NUMS);
    for (i = 0; i < NUMS; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter Number to Search For: ");
    scanf("%d", &n);
    
    int result = linsearch(arr, NUMS, n);
    
    // trying out the conditional operator
    
    result == -1 ? printf("Number not found.\n") : printf("Number found at position %d.\n", result);
    
    return 0;
    

}