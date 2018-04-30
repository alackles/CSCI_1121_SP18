/*
*
*   Build a calculator to add, multiply, divide, and find the square root of numbers. 
*
*/

#include <stdio.h>
#include <math.h>

#define LEN 10
int main() {

    double x, y, res;
    char op; 
    
    printf("Welcome to the basic calculator.\n");
    printf("--SYNTAX--\n");
    printf("Addition: x + y\n");
    printf("Subtraction: x - y\n");
    printf("Multiplication: x * y\n");
    printf("Division: x / y\n");
    printf("Square Root: x #\n");
    printf("--SPACES REQUIRED--\n");
    
    printf("Input: ");
    
    scanf("%lf ", &x);
    scanf("%c", &op);
    
    if (op != '#') {
        scanf(" %lf", &y);
    } else {
        res = sqrt(x);
    }
    
    
    
    if (op == '+') {
        res = x + y;
    } else if (op == '-') {
        res = x - y;
    } else if (op == '*') {
        res = x * y;
    } else if (op == '/') {
        res = x/y;
    } else if (op != '#'){
        printf("Invalid Operation.\n");
        return 0;
    }
    
    printf("= %.4lf\n", res);
    return 1;
    
}