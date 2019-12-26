#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int f(int x) {
    int factorial = 1;
    for ( int i = 1; i <= x; i++) {
        factorial *= i;
    }
    printf("Factorial for %d is %d \n", x, factorial);
    return factorial;
}

int comb(int n, int p) {
    int combination;
    combination = f(n)/(f(p)*f(n-p));
    return combination;
}


int main() {

    int n,p;
    printf("Enter n ");
    scanf("%d", &n);
    printf("Enter p ");
    scanf("%d", &p);

    int combination;
    combination = comb(n,p);

    printf("There are %d possible combionations", combination);

    return 0;
}
