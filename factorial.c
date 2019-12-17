#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    printf("Enter the number ");
    scanf("%d", &n);

    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;

    }

    printf("%d", result);

    return 0;
}
