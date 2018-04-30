/*
*
*   Check a current PIN code against SIM card.
*
*   Current code is 5678
*
*/

#include <stdio.h>

#define PIN 5678

int main() {

    int pin, verify;
    
    printf("Enter PIN: ");
    scanf("%d", &pin);
    
    if (pin == PIN) {
        printf("Enter Again for Verification: ");
            scanf("%d", &verify);
            if (verify == PIN) {
                printf("Access Granted.\n");
            }
    } else {
        printf("Access Denied.\n");
    }
    
    return 0;

}