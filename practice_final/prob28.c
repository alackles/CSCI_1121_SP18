/*
*
*   Take value of three sensors that check machine's condition on a scale of 1 to 40. 
*
*
*
*/

#include <stdio.h>

#define MAL 23
#define IDLE 7
#define HEAT 42
#define MAX 40

void sensors(double a, double b, double c);
int main() {

    
    printf("Machine Condition Sensor with Test Outputs.\n\n");
    
    // Test Case: Sensor output < 7
    double test1[] = {2, 1, 1};
    
    printf("Test: Idle & Malfunctioning\n");
    printf("Inputs: %.3f, %.3f, %.3f\n", test1[0], test1[1], test1[2]);
    printf("Output:");
    sensors(test1[0], test1[1], test1[2]);
    printf("\n");
    
    //Test Case: Sensor output between 7 and 23
    double test2[] = {3, 6, 8};
    
    
    printf("Test: Malfunctioning, not Idle\n");
    printf("Inputs: %.3f, %.3f, %.3f\n", test2[0], test2[1], test2[2]);
    printf("Output:");
    sensors(test2[0], test2[1], test2[2]);
    printf("\n");

    // Test Case: Sensor output > 40
    double test3[] = {39, 30, 38};
    
    printf("Test: Overheating\n");
    printf("Inputs: %.3f, %.3f, %.3f\n", test3[0], test3[1], test3[2]);
    printf("Output:");
    sensors(test3[0], test3[1], test3[2]);
    printf("\n");
    
    // Test Case: Sensor output between 23 and 40
    double test4[] = {10, 15, 12};
    
    printf("Test: Normal Function\n");
    printf("Inputs: %.3f, %.3f, %.3f\n", test4[0], test4[1], test4[2]);
    printf("Output:");
    sensors(test4[0], test4[1], test4[2]);
    printf("\n");

}
    
// Return format of this is due to the condition that the program should give test outputs

// I would prefer to write a program that returns the percentage itself as a double
// Then, using if-else statements in main, output a single case: malfunctioning, idle, overheating, normal. 

void sensors(double a, double b, double c) {
    
    // Value of the percentage
    double pct = ((a + b + c)/(MAX*3))*100;
    
    printf("\nOverall Percent: %.2f\n", pct);
    
    if (pct < MAL) {
        printf("Machine is malfunctioning!\n");
        if (pct < IDLE) {
            printf("Machine is running idle.\n");
        }
    } else if (pct > HEAT) {
        printf("Machine is overheated!\n");
    } else {
        printf("Machine is functioning normally.\n");
    }

}