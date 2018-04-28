/*
*
*   Write a program to read an integer in [0,100] and display its factorial.
*
*
*/

#include <stdio.h>

unsigned long long int fac(int n);

int main() {

    int num;

    printf("Factorial Calculator\n\n");
    printf("Enter Integer Between 0 and 100: ");
    
    scanf("%d", &num);
    
    if (num <= 100) {
        printf("%d! = %llu\n", num, fac(num));
    }
    else {
        printf("Input invalid.");
    }

}

unsigned long long int fac(int n) {

    unsigned long long int f = n;
    
    if (n == 0) {
        return 1;
    }
    else {
        for (int i = n-1; i >= 1; --i)
            f = f*i;
        return f;
    }
    
}