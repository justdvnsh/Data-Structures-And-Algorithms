#include <stdio.h>
#include <stdlib.h>

int main() {

    int x,y, temp;
    printf("Enter first number ");
    scanf("%d", &x);
    printf("Enter second number ");
    scanf("%d", &y);

    temp = x;
    x = y;
    y = temp;

    printf("x is %d and y is %d", x, y);

    return 0;
}
