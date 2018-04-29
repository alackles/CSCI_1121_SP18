/*
*
*   Find integer roots, if any, of 3x + 7y - 5z = 10 within [-30, 30]
*
*/

#include <stdio.h>

int main() {

    int x, y, z;
    
    printf("3x + 7y - 5z = 10\n");
    
    for (x = -30; x <= 30; x ++) {
        for (y = -30; y <= 30; y++) {
            for (z = -30; z <= 30; z++) {
                if (3*x + 7*y - 5*z -10 == 0) {
                    printf("Integer solution: x = %d, y = %d, z = %d.\n", x, y, z);
                }
            }
        }
        return 0;
    }
    
    printf("No integer solutions found.\n");
    return 1; 

}