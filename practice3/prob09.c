/*
*
*   Write a void function that generates a random number from 0 to 1
*   w/ 2 decimal digits and uses a proper parameter to return it.
*
*   Write a C program that calls the function & displays the return value.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double randdec(void);


int main() {

    printf("Random number: %.2lf\n", randdec());

}

double randdec(void) {

    srand(time(NULL));
    return (rand() % 100) / 100.0;

}