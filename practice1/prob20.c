/*
*
*   Problem 20
*
*   Find the error, explain in words, and compile and run the C program. 
*
*/

#include <stdio.h>
int main()
{
    int a = 10, b = -10;
    
    if(a > 0 && b < -8)
        printf(" One ");
        
    else
        printf(" Two ");
        
    //if(a > 10 || b = -10)     assignment, not logical operator
    if(a > 10 || b == -10) 
        printf(" One ");
    else
        printf(" Two "); 
        
    /* Can't fix this otherwise because I have no idea what it's intending to do. */

} 