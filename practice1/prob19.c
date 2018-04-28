/*
*
*   Problem 19
*
*   Find the error, explain in words, and compile and run the C program. 
*
*/

#include <stdio.h>
int main()
 {
    int a = 3, b = 5, c;
//    a = (a > 3) + (b <= 5);
//    b = (a = 3) + ((b-2) >= 3);
//    c = (b = 1);

/* Overwrites the value of a, b, and c as it is trying to  make judgments about them */
/* Need new variable names instead */
/* unsure if these are supposed to be logical ands instead of plus? Unsure what this program does. */

    int x, y, z;
        x = ((a > 3) && (b <= 5));
        y = ((a = 3) && ((b-2) >= 3));
        z = ((b = 1));
    
    
//    printf("%d %f %d\n", x, y, z);    unnecessarily uses float

    printf("%d %d %d\n", x, y, z);
    return 0;
}