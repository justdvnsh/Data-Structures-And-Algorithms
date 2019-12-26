#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int f(int x) {
    int factorial = 1;
    for ( int i = 1; i <= x; i++ ) {
        factorial *= i;
    }
    return factorial;
}

double expo(int pw) {
    double exponent = 1.0;
    for (int i = 1; i <= pw; i++) {
        printf("pw(%d,%d) = %f \n",pw, i, pow(pw, i));
        printf("f(i) = %d \n", f(i));
        printf("result = %f \n", pow(pw, i) / f(i));
        exponent += (pow(pw, i) / f(i));
    }
    return exponent;
}

int main() {

    int pw;
    printf("Enter the power ");
    scanf("%d", &pw);

    double exponent;
    exponent = expo(pw);

    printf("Result -> %f", exponent);

    return 0;
}
