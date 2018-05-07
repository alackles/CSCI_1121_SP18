/*
*
*   Use a recursive function to calculate the sum & product of two numbers.
*
*/


#include <stdio.h>

int sum(int x, int y);
int product(int x, int y);

int main() {

    int x, y;
    
    printf("Calculate x + y and x*y.\n");
    printf("x: ");
    scanf("%d", &x);
    
    printf("y: ");
    scanf("%d", &y);

    printf("%d + %d = %d\n", x, y, sum(x,y));
    printf("%d * %d = %d\n", x, y, product(x,y));
    
    return 0;
    
}

int sum(int x, int y) {
    
    if (y == 0) {
        return x;
    }
    return sum(x, y-1) + 1;

}

int product(int x, int y) {

    if (x < y) {
        return product(y, x);
    }
    else if (y != 0) {
        return product(x, y - 1) + x;
    } else {
        return 0;
    }
}