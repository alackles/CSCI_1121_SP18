/*
*
*   Given a polynomial of the form c_0 + c_1y + c_2y^2 + ... + c_ny^n
*   Create a C function to return the value of the polynomial for the given y.
*
*   Select the function prototype as polynomial(double c[], double y, int z);
*   where the coefficients are stored in c and the degree of the polynomial is z
*
*   Write a C program to read the degree, the coefficients, and a value y, and
*   return the value of the polynomial. Assume that the max degree is 25. 
*
*/

#include <stdio.h>
#include <math.h>               

#define MAX_POWER 25

double polynomial(double c[], double y, int z);

int main() {

    double c[MAX_POWER];
    double y;
    int z;
    
    printf("Compute the sum of a polynomial of up to degree 25.\n\n");
    
    printf("Enter degree of polynomial: ");             
    scanf("%d", &z);
    
    printf("\nEnter coefficients one at a time.\n");
  
    int i;
    
    for (i = 0; i <= z; ++i) {                  
        printf("c_%d: ", i);                    
        scanf("%lf", &c[i]);                    
    }
    
    printf("\nEnter y: ");                      
    scanf("%lf", &y);
    
    printf("\nSum of Polynomial: %.3f\n", polynomial(c, y, z));
    

}


double polynomial(double c[], double y, int z) {

    double sum = 0;
    
    int i;
    
    for (i = 0; i <= z; ++i) {          
        sum += c[i]*pow(y,i);           
    }
    
    return sum;

}