/*
*
*  Write a function that takes three 2x4 2-dimensional arrays and sum the first 2 into the third
*
*  Create a C program to read 16 integers and store them in the arrays, then use function to display sum
*
*/

#include <stdio.h>

#define ROWS 2
#define COLS 4

// takes as parameters 3 matrices and their number of rows and columns

void matsum(int a[ROWS][COLS], int b[ROWS][COLS], int c[ROWS][COLS]);

void matsum(int a[ROWS][COLS], int b[ROWS][COLS], int c[ROWS][COLS]) {

    int i, j;
    
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
}

int main() {

    int a[ROWS][COLS], b[ROWS][COLS], c[ROWS][COLS], i, j;
    
    printf("Enter Matrix 1 by Rows (space delimited).\n");
    
    for (i = 0; i < ROWS; i++) {
        printf("Row %d: ", i+1);
        for (j = 0; j < COLS; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter Matrix 2 by Rows (space delimited).\n");
    
    for (i = 0; i < ROWS; i++) {
        printf("Row %d: ", i+1);
        for (j = 0; j < COLS; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    matsum(a, b, c);
    
    printf("Matrix Sum: \n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}