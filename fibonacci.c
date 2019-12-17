#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    printf("Enter number of terms ");
    scanf("%d", &n);

    printf("%d%d", 0,1);
    int a = 0;
    int b = 1;
    int temp;
    for (int i = 2; i < n; i++) {
        temp = a + b;
        printf("%d", temp);
        a = b;
        b = temp;
    }

    return 0;
}
