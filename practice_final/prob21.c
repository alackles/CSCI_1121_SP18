/*
*   Write a program to read the grades of 5 students and store them in an array.
*
*   Then, program displays the average, greatest, and worst grade, as well as their positions in array.
*   
*   Require the user to enter grades within [50, 100].
*/

#include <stdio.h>

#define STUDENTS 5
#define LOWER_LIM 50
#define UPPER_LIM 100

int main() {

    double grades[STUDENTS], g, min = UPPER_LIM, max = LOWER_LIM, total;
    
    int i = 0, min_pos, max_pos;
    
    printf("Enter student grades.\n");
    
    for (i = 0; i < STUDENTS; i++) {
        do {
            printf("Grade %d: ", i + 1);
            scanf("%lf", &g);
            if (g >= LOWER_LIM && g <= UPPER_LIM) {
                total += g;
                grades[i] = g;
            } else {
                printf("Error: grade must be within [%d, %d].\n", LOWER_LIM, UPPER_LIM);
            }
        } while (g < LOWER_LIM|| g > UPPER_LIM);
    }
    
    for (i = 0; i < STUDENTS; i++) {
        if (grades[i] < min) {
            min = grades[i];
            min_pos = i;
        }
        if (grades[i] > max) {
            max = grades[i];
            max_pos = i;
        }
    }

    printf("Average Grade: %.2lf\n", total/STUDENTS);
    printf("Minimum Grade: %.2lf (Position: %d)\n", min, min_pos);
    printf("Maximum Grade: %.2lf (Position: %d)\n", max, max_pos);


}
