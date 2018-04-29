/*
*
*   Create a C function to read book prices and output highest, lowest, avg
&   Create a C program to read the book prices and store them in an array
*
*/

#include <stdio.h>

#define MAX 75

void bookprices(double p[], int n);

int main() {

    double books[MAX], price;
    int ct = 0;
    
    printf("Enter prices of books one at a time.\n");
    printf("When you have finished entering prices, input [-1]\n");

    
    while (price != -1) {
        printf("Book %d: ", ct+1);
        scanf("%lf", &price);
        if (price != -1) {
            books[ct] = price;
        }
        ct++;
    }
    
    bookprices(books, ct-1);
}


void bookprices(double p[], int n) {
    
    double min = p[0], max = p[0], avg, sum;
    int i;
    
    for (i = 0; i < n; i++) {
    
        if (p[i] < min) {
            min = p[i];
        } else if (p[i] > max) {
            max = p[i];
        } 
        
        sum += p[i];
    }
    
    avg = sum/n;
    
    printf("Highest: %.2lf\n", max);
    printf("Lowest: %.2lf\n", min);
    printf("Average: %.2lf\n", avg);

}