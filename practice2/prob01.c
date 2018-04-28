/*
*
*   A test consists of 10 multiple choice questions, each of which has three possible answers. 
*   The first answer gets three points, the second one point, and the third two points. 
*
*   Write a program that uses the switch statement to read the test taker’s 10 answers 
*   and display the final score.
*
*/

#include <stdio.h>

int main() {

    int i, num, score = 0;
    printf("Enter 1, 2, or 3 as your answers to the questions.\n");
    
    for (i = 1; i <= 10; i++) {
        printf("Question #%d: ", i);
        scanf("%d", &num);
        
        switch (num) {
        
            case 1: score += 3; break;
            case 2: score += 1; break;
            case 3: score += 2; break;
            default: break;
        
        }
    
    }
    
    printf("Final score: %d\n", score);


}