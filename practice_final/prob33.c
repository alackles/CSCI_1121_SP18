/*
*
*   Create a C function to read shoe prices and output highest, lowest, avg
&   Create a C program to read the shoe prices and store them in an array
*
*/


// Identical to Problems 4 Question 4, but with books ctrl+f replaced with shoes
//  also max changed from 75 to 60

#include <stdio.h>

#define MAX 60

void shoeprices(double p[], int n);

int main() {

    double shoes[MAX], price;
    int ct = 0;
    
    printf("Enter prices of shoes one at a time.\n");
    printf("When you have finished entering prices, input [-1]\n");

    
    while (price != -1) {
        printf("Shoe %d: ", ct+1);
        scanf("%lf", &price);
        if (price != -1) {
            shoes[ct] = price;
        }
        ct++;
    }
    
    shoeprices(shoes, ct-1);
}


void shoeprices(double p[], int n) {
    
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