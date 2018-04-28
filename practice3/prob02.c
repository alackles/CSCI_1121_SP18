/* 
*
*   Write a function that returns the min of 3 values.
*   Write a program that reads the grades of 3 students,
*   and uses the function to display the minimum grade.
*
*/

#include <stdio.h>

float min(float a, float b, float c);

int main() {

    float grades[3];
    
    printf("Find the minimum of 3 grades.\n");
    
    int i;
    
    for (i = 0; i < 3; ++i) {
        printf("Enter Grade %d: ", i + 1);
        scanf("%f", &grades[i]);
    }
    
    printf("Lowest grade is %.2f.\n", min(grades[0], grades[1], grades[2]));
}

float min(float a, float b, float c) {

    if (a <= b && a <=c) {
        return a;
    } else if (b < a && b < c) {
        return b;
    }
    else {
        return c;
    }

}