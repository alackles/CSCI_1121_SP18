/* 
*
*   Generate 7 random integers in user-defined parameters using a function.
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int randrange(int a, int b);

#define NUM 7

int main() {

    int a, b, i;
    
    printf("Enter range.\n");
    
    do {
        printf("Must have a <= b. \n");
        printf("a: ");
        scanf("%d", &a);
    
        printf("b: ");
        scanf("%d", &b);
    
        
    } while (a > b);

    printf("Please hold.\n");
    
    printf("Random Numbers: ");
    
    
    for (i = 1; i <= NUM; i++) {
        sleep(1); 
        printf("%d", randrange(a,b));
        if (i < NUM) {
            printf(", ");
        } else {
            printf("\n");
        }
    }
    
    return 0;
    

}

int randrange(int a, int b) {

    srand(time(NULL));
    return a + (rand() % (b - a + 1));

}