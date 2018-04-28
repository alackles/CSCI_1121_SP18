/*
*
*   Write a function to take 3 floats as parameters
*   and return the average of the ones within [1,2]
*
*   Write a C program which reads 3 floats, calls the function,
*   and displays the return value.
*
*/

#include <stdio.h>

float floatavg(float a, float b, float c);

int main() {

    float nums[3];
    
    printf("Find the average of 3 floats.\n");
    printf("ONLY FLOATS IN RANGE [1,2] WILL BE CONSIDERED.\n");
    
    int i;
    
    for (i = 0; i < 3; ++i) {
        printf("Enter Float %d: ", i + 1);
        scanf("%f", &nums[i]);
    }
    
    printf("Average: %.3f\n", floatavg(nums[0], nums[1], nums[2]));
}

float floatavg(float a, float b, float c) {
    
    float nums[3] = {a, b, c};
    float sum = 0;
    int ct = 0;
    
    int i;
    
    for (i = 0; i < 3; ++i) {
        if (nums[i] >= 1 && nums[i] <= 2) {
            sum += nums[i];
            ct += 1;
        }
    }
    
    if (ct == 0) {
        return 0;
    } else {
        return sum/ct;
    }
    
    
}