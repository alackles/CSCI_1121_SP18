/*
*
*  Assign random integers to a 2 x 6 array and display the max and min in each row/column
*
*   Use pointer arithmetic to process the array.
*
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 2
#define COLS 6
#define LOWER 0
#define UPPER 20

int randints(int x, int y);

int main() {

    srand(time(NULL));
    
    int arr[ROWS][COLS], rowmins[ROWS] = {UPPER}, colmins[COLS] = {UPPER}, i, j, *ptr;
    
    // initialize the arrays
        
    for (i = 0; i < ROWS; i++) {
        rowmins[i] = UPPER;
        for (j = 0; j < COLS; j++) {
            colmins[j] = UPPER;
            arr[i][j] = randints(LOWER, UPPER);
        }
    }

    ptr = &arr[0][0];
    
    // find the minimum and maximums of the rows using pointers
    
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            if (*ptr < rowmins[i]) {
                rowmins[i] = *ptr;
            }
            if (*ptr < colmins[j]) {
                colmins[j] = *ptr;
            }
            ptr++;
        }
    }
    
    // print the matrix
    printf("Matrix: \n");
    
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    
    // print the minima 
    printf("Row Minima: ");
    for (i = 0; i < ROWS; i++) {
        printf("%d ", rowmins[i]);
    }
    printf("\n");
    
    printf("Column Minima: ");
    for (j = 0; j < COLS; j++) {
        printf("%d ", colmins[j]);
    }
    printf("\n");
    
    return 0;
    
}

// generate random integer between specified x and y (where x <= y)
int randints(int x, int y) {
    int j = y - x;
    return x + rand() % (j+1);
}
