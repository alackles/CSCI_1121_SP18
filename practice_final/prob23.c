/*
*   
*   Create a C program to read integers and store them in a square matrix.
*   
*   Then check whether the array is square; the sum of each row, column, and diagonal is the same
*
*/

#include <stdio.h>

int same(int arr[], int n);

int main() {

    int n, i, j;
    
    printf("Enter dimensions of matrix: ");
    scanf("%d", &n);
    
    int matrix[n][n], rows[n], columns[n], diags[2] = {0};
    
    
    printf("Enter data by rows (space delimited)\n");
    for (i = 0; i < n; i++) {
        printf("Row %d: ", i + 1);
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    
    for (i = 0; i < n; i++) {
        rows[i] = 0; 
        columns[i] = 0; 
    }
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            rows[i] += matrix[i][j]; 
            columns[i] += matrix[j][i];
            if (i == j) {
                diags[0] += matrix[i][j];
            }
            if (i == n - j - 1) {
                diags[1] += matrix[i][j];
            }
        }
    }
    
    
    if (same(rows, n) && same(columns, n) && same(diags, 2)) {
        if ((rows[0] == columns[0]) && (columns[0] == diags[0])) {
            printf("Matrix is square.\n");
            return 1;
        }
    } 
     printf("Matrix is not square.\n");
    return 0;
}

int same(int arr[], int n) {

    // checks if all elements of an array are the same (given length)
    
    int i; 
    
    for (i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i+1]) {
            return 0;
        }
    }
    return 1;
}




