/*
*   Write a program to read the grades of 5 students and store them in an array.
*
*   Then, program displays the greatest and worst grade, as well as their positions in array.
*   
*   Require the user to enter grades within [50, 100].
*
*   --MUST BE DONE USING POINTERS--

*/

#include <stdio.h>

#define STUDENTS 5
#define LOWER_LIM 50
#define UPPER_LIM 100

int main() {

    double grades[STUDENTS], *ptr_grade, g, min = UPPER_LIM, max = LOWER_LIM, total;
    
    int i, min_pos, max_pos;
    
    ptr_grade = grades;
    
    printf("Enter student grades.\n");
    
    for (i = 0; i < STUDENTS; i++) {
        do {
            printf("Grade %d: ", i + 1);
            scanf("%lf", &g);
            if (g >= LOWER_LIM && g <= UPPER_LIM) {
                *ptr_grade = g;
                ptr_grade++;
            } else {
                printf("Error: grade must be within [%d, %d].\n", LOWER_LIM, UPPER_LIM);
            }
        } while (g < LOWER_LIM|| g > UPPER_LIM);
    }
    
    ptr_grade = grades;
    i = 0;
    
    while (i < STUDENTS) {
        if (*ptr_grade < min) {
            min = *ptr_grade;
            min_pos = i;
        }
        if (*ptr_grade > max) {
            max = *ptr_grade;
            max_pos = i;
        }
        ptr_grade++;
        i++;
    }

    printf("Minimum Grade: %.2lf (Position: %d)\n", min, min_pos);
    printf("Maximum Grade: %.2lf (Position: %d)\n", max, max_pos);
    
    return 0;


}
