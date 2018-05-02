/*
*
*   Create program to calculate area of square or circle.
*
*   If user enters 0, compute square. If 1, compute circle.
*
*/

#include <stdio.h>

#define PI 3.14159
#define SQUARE 0
#define CIRCLE 1

int main() {

    int shape, err = 0;
    double x, area;

    printf("Area calculator.\n");
    
    do {
        err = 0;
        
        printf("Enter %d for square, %d for circle.\n", SQUARE, CIRCLE);
        scanf("%d", &shape);
        
        switch (shape) {
            case SQUARE:
                printf("Enter side length: ");
                break;
            case CIRCLE:
                printf("Enter radius: ");
                break;
            default:
                printf("Error: invalid input. Please try again.\n");
                err = 1;
                break;
        }
       
       if (!err) { 
           scanf("%lf", &x);
           printf("Area: ");
           switch (shape) {
                case SQUARE:
                    area = x*x;
                    break;
                case CIRCLE:
                    area = PI*x*x;
                    break;
                default:
                    area = 0;
                    break;
            }
            printf("%.3lf\n", area);
        }
        
        

    } while (shape != SQUARE && shape != CIRCLE);
    
    return 0;
}