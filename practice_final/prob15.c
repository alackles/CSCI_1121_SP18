/*  A machine shop produces small and big metal discs.
*
*   A small one costs $0.007 and a big one $0.03. 
*
*   For orders of more than $310 or more than 3200 discs in total, a discount of 5%.
*
*   For orders of more than $700, the discount is 15%. 
*
*   Create a C program to read the number of small and big metal discs ordered 
*   and to display the total cost.
*/


#include <stdio.h>

#define SMALL_COST 0.007
#define BIG_COST 0.03

#define DISCOUNT_1 0.05
#define MIN_PRICE_1 310
#define MIN_DISCS_1 3200

#define DISCOUNT_2 0.15
#define MIN_PRICE_2 700

int main() {

    int small, big;
    double init_price, final_price;
    
    printf("Cost calculator.\n");
    printf("Num small discs: ");
    scanf("%d", &small);
    
    printf("Num big discs: ");
    scanf("%d", &big);
    
    init_price = small * SMALL_COST + big * BIG_COST;
    
    if (init_price >= MIN_PRICE_2) {
        final_price = init_price * (1-DISCOUNT_2);
    } else if (init_price >= MIN_PRICE_1 || small + big >= MIN_DISCS_1) {
        final_price = init_price * (1-DISCOUNT_1);
    } else {
        final_price = init_price;
    }
    
    printf("Price: %.2lf\n", final_price);
    
    return 0;

}