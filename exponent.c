#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exponent(int base, int exp) {
    int result = 1;
    if (exp == 1) {
        printf("The exponent is %d", base);
    } else {
        for (int i = 1; i <= exp; i++) {
            result *= base;
        }
        printf("The answer is %d \n", result);
    }
}

int main() {

    int base, exp;
    printf("Enter base number ");
    scanf("%d", &base);
    printf("Enter the power ");
    scanf("%d", &exp);

    exponent(base, exp);


    return 0;
}
