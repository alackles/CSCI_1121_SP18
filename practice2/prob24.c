/*
*
*   Write a program that reads the prices of a shop's products until the user enters -1.
*   Display lowest price, highest price, and average of prices within [5, 30]
*
*   Assume highest price is 100.
*/

#include <stdio.h>

#define AVG_MIN 5.0
#define AVG_MAX 30.0
#define MAX_PRICE 100.0

#include <stdio.h>

int main() {

    float low = MAX_PRICE, high = 0, total = 0, price = 0;
    int n = 0; 

    printf("Enter prices (space delimited). Terminate with -1.\n");
    printf("Prices: ");
    
    do {
        total += price;
        scanf("%f", &price);
        if (price >= AVG_MIN && price <= AVG_MAX) {
            total += price;
            n++;
        }
        if (price >= 0 && price < low) {
            low = price;
        }
        if (price > high) {
            high = price; 
        }
    } while (price != -1);
    
    printf("Lowest Price: %.2f\n", low);
    printf("Highest Price: %.2f\n", high);
    printf("Average Prices in [%.2f, %.2f]: %.2f\n", AVG_MIN, AVG_MAX, total/n);
    
    return 0;
}