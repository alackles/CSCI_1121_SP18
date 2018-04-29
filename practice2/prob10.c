/*
*
*   Write a program to read the grades of 100 students
*   display the average of the passed students & failed students
*
*   A student passes the exam with a grade >= 5
*   
*   If the user enters -1, the insertion of grades should end. 
*/


#include <stdio.h>

#define MAX 100

int main() {

    float g, grades[MAX], pass_total = 0, fail_total = 0, pass_num = 0, fail_num = 0;
    int i = 0;
    
    printf("Enter student grades between [0, 10].\n");
    
    do {
    
        do {
            printf("Grade %d: ", i + 1);
            scanf("%f", &g);
        
            if (g >= 5 && g <= 10) {
                pass_total += g;
                pass_num++;
            } else if (g >= 0 && g < 5) {
                fail_total += g;
                fail_num++;
            } else if (g != -1){
                printf("Invalid; please enter grades between [0,10].\n");
            }
        } while ((g < 0 || g > 10) && g != -1);
        
        
        printf("Passing Avg: ");
        if (pass_num) {
            printf("%.2f\n", pass_total/pass_num);
        } else {
            printf("N/A\n");
        }
        
        printf("Failing Avg: ");
        if (fail_num) {
            printf("%.2f\n", fail_total/fail_num);
        } else {
            printf("N/A\n");
        }
        
        grades[i] = g;
        i++; 
        
    } while (g != -1);


}