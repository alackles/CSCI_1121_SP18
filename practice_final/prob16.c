/*
*
*   Write a program that reads the initial population of a country and its annual pop growth
*   
*   Then read the number of years and display the new population for each year. 
*/

// Identical to Problem Set 2 Question 7

#include <stdio.h>

int main() {

    int year, pop, n, i;
    double rate;
    
    printf("Population calculator.\n");
    
    printf("Enter current year: ");
    scanf("%d", &year);
    
    printf("Enter current population: ");
    scanf("%d", &pop);
    
    printf("Enter growth rate (in %%): ");
    scanf("%lf", &rate);
    
    printf("Enter number of years to project: ");
    scanf("%d", &n);
    
    double current = pop;
    
    printf("\nPOPULATION FORECAST:\n");
    printf("Year\tPop\n");
    for (i = 1; i <= n; i++) {
        current *= (1 + rate/100);
        printf("%d\t%.0lf\n", year + i, current);
    }
    
}