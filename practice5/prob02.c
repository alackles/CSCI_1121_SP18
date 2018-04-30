/*
*   Read string of <=50 characters
*   Check if the string is palindromic
*
*/

#include <stdio.h>

#define LEN 7

int symmetry(int arr[], int n);

int main() {

    int arr[LEN];
    int i, c;
    
    printf("Check whether string is palindromic.\n");
    printf("Enter string: ");
    
    while ((c=getchar()) != '\n') {
        if (c != ' ') {
            c = arr[i];
        }
        ++i;
    }
    
    if (symmetry(arr, LEN)) {
        printf("String is palindromic.\n");
    } else {
        printf("String is not palindromic.\n");
    }

}

// Determines whether an array is symmetric given the length of the array
int symmetry(int arr[], int n) {

    int i;
    
    for (i = 0; i <= n/2; i++) {
        if (arr[i] != arr[(n-1)-i]) {
            return 0;
        }
    }
    return 1;
    
}
