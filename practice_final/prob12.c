/*
*
*   Each exam is graded by two GTAs.
*   If the difference of the grades is < z, the final is the average.
*   If the difference is >= z, it is reviewed by a third GTA.
*   If the grade is the average, that is the final grade.
*   If the grade is lower than the two grades, the final is the minimum.
*   Otherwise, the final grade is the average of the third grade and the next closest.
*
*   Write a program to read the grades and the difference z, and display the final grade.
*
*
*/

#include <stdio.h>

double min(double a, double b);
double max(double a, double b);
double avg(double a, double b);

int main() {
    
    double grade1, grade2, grade3, min_grade, max_grade, z, final;
    
    printf("Enter Grade 1: ");
    scanf("%lf", &grade1);
    
    printf("Enter Grade 2: ");
    scanf("%lf", &grade2);
    
    printf("Enter Difference Tolerance (z): ");
    scanf("%lf", &z);
    
    min_grade = min(grade1, grade2);
    max_grade = max(grade1, grade2);
    
    if (max_grade - min_grade >= z) {
        printf("Difference Tolerance Exceeded. Third grader required.\n");
        printf("Enter Grade 3: ");
        scanf("%lf", &grade3);
        if (grade3 <= min_grade) {
            final = min_grade;
        } else if (grade3 == avg(min_grade, max_grade)) {
            final = grade3; 
        } else if (max_grade - grade3 <= grade3 - min_grade) {
            final = avg(max_grade, grade3);
        } else {
            final = avg(grade3, min_grade);
        }
    } else {
        final = avg(min_grade, max_grade);
    }
    
    printf("Final Grade: %.2lf\n", final);
    
    return 0;
}

double min(double a, double b) {
    if (a <= b) {
        return a;
    } else {
        return b;
    }
}

double max(double a, double b) {
    if (a >= b) {
        return a;
    } else {
        return b;
    }
}

double avg(double a, double b) {
    return (a + b)/2;
}