/*
*
*   Write a program that reads the number of students in a class and their grades on a test. 
*   The program should display the average test grade of the class, 
*   the minimum and maximum test grade, and how many students got the same maximum grade. 
*
*   Assume that the grades are integers within [0, 10].
*/

#include <stdio.h>

int main() {

    int n, i, min = 10, max = 0, maxnum = 0; 
    float sum = 0; 
    
    printf("Number of Students: ");
    scanf("%d", &n);
    
    int grades[n];
    
    printf("Enter grades (space delimited): \n");
    
    for (i = 0; i < n; i++) {
        scanf("%d", &grades[i]);
        sum += grades[i];
        
        if (grades[i] > max) {
            max = grades[i];
            maxnum = 1; 
        } else if (grades[i] == max) {
            maxnum += 1;
        }
        
        if (grades[i] < min ) {
            min = grades[i];
        }
    }
    
    printf("Avg Grade: %.2f\n", sum/n);
    printf("Min Grade: %d\n", min);
    printf("Max Grade: %d\n", max);
    printf("[%d students scored %d]\n", maxnum, max);
    
    return 0;

}