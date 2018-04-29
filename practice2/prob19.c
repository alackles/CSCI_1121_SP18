/*
*
*   Average 5 grades across 3 courses, and across all courses. 
*
*
*/

#include <stdio.h>

#define STUDENTS 5
#define COURSES 3

int main() {

    int i, j;
    
    float totals[COURSES] = {0}, num, overall = 0;
    
    printf("Average calculator for %d students in %d courses.\n", STUDENTS, COURSES);
    
    for (i = 0; i < COURSES; i++) {
        printf("Course %d grades: ", i+1);
        for (j = 0; j < STUDENTS; j++) {
            scanf("%f", &num);
            totals[i] += num;
        }
    }
    printf("\n");
    for (i = 0; i < COURSES; i++) {
        printf("Course %d Average: %.2f\n", i+1, totals[i]/STUDENTS);
        overall += totals[i];
    }
    
    printf("Overall Average: %.2f\n", overall/(STUDENTS*COURSES));
    
    
}