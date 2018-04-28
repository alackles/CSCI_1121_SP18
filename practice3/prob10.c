/*
*
*   Write a function that takes student's grades and two grades
*   and returns the average of the grades within [a,b]
*
*   Write a C program that reads 50 grades and uses the 2 grades to
*   display the average 
*
*   Should require a < b
*
*
*/

#include <stdio.h>

// this function also takes num as the number of grades

double range_avg(double grades[], int num, double a, double b);

#define MAX 5

int main() {

    double grades[MAX], a, b;
    int i;
    
    printf("Enter grades below.\n");
    
    printf("Grades: ");
    
    for (i = 0; i < MAX; i++) {
        scanf("%lf", &grades[i]);
    }
    
    printf("Enter parameters for average.\n");
    do {
    
        printf("Must have a <= b.\n");
        printf("a: ");
        scanf("%lf", &a);
        
        printf("b: " );
        scanf("%lf", &b);
    } while (a > b);
    
    printf("Average of grades in [%.2lf, %.2lf]: %.2lf\n", a, b, range_avg(grades, i, a, b));


}

double range_avg(double grades[], int num, double a, double b) {

    double sum = 0;
    int i = 0;
    int ct = 0;
    
    for (i = 0; i < num; i ++ ) {
        if (grades[i] >= a && grades[i] <= b) {
            sum += grades[i];
            ct++;
        }
    }
    
    if (ct == 0) {
        return 0;
    } else {
        return sum/ct;
    }

}