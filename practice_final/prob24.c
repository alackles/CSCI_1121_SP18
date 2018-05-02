/*
*   Write a program to use 3 pointers to read the grades of a student in 3 exams.
*
*   If all grades are >=6, print them in ascending order.
*
*   Otherwise, display their average.
*/

#include <stdio.h>

int main() {

    double *gr1, *gr2, *gr3;
    double a, b, c;
    
    printf("Enter Grade 1: ");
    scanf("%lf", &a);
    
    printf("Enter Grade 2: ");
    scanf("%lf", &b);
    
    printf("Enter Grade 3: ");
    scanf("%lf", &c);
    
    gr1 = &a;
    gr2 = &b;
    gr3 = &c;
    
    if (*gr1 >= 6 && *gr2 >= 6 && *gr3 >= 6) {
    
        // this is so ugly but i just brute forced it because there's only 3 grades
        
        if (*gr1 >= *gr2 && *gr2 >= *gr3) {
            if (*gr2 >= *gr3) {
                printf("%.2lf, %.2lf, %.2lf\n", *gr3, *gr2, *gr1);
            } else {
                printf("%.2lf, %.2lf, %.2lf\n", *gr2, *gr3, *gr1);
            }
        } else if (*gr2 >= *gr1 && *gr2 >= *gr3) {
            if (*gr1 >= *gr3) {
                printf("%.2lf, %.2lf, %.2lf\n", *gr3, *gr1, *gr2);
            } else {
                printf("%.2lf, %.2lf, %.2lf\n", *gr1, *gr3, *gr2); 
            }
        } else {
            if (*gr1 >= *gr2) {
                printf("%.2lf, %.2lf, %.2lf\n", *gr2, *gr1, *gr3);
            } else {
                printf("%.2lf, %.2lf, %.2lf\n", *gr1, *gr2, *gr3); 
            }
        }
        
    } else {
        printf("Average: %.2lf\n", (*gr1 + *gr2 + *gr3)/3);
    }
    
    return 0;

}