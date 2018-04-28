/*
*
*   Problem 18
*
*   Find the error, explain in words, and compile and run the C program. 
*
*/

#include <stdio.h>

main() {
//int n, int n2, int m3;     declares m3, not n3, and has "int" multiple times where it should just be a comma
int n, n2, n3;     /* declares n3 instead */
n = 5;
n2 = n * n;

// n3 = n2 * n2     ORIGINAL LINE HERE: this returns n^4, not n^3
n3 = n2 * n;        /* this returns n^3 instead */

//printf("n = %f, n is squared = %d, n is cubed = %d/n", n, n2, m3); }  uses %f instead of %d for int
printf("n = %d, n is squared = %d, n is cubed = %d\n", n, n2, n3); } 
