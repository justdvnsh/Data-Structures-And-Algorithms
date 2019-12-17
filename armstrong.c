#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int n;
    printf("Enter the number ");
    scanf("%d", &n);

    int result = 0;
    int temp = n;
    int a = 0;
    while(temp > 0) {
        a = temp % 10;
        result = result + pow(a,3);
        temp = temp / 10;
    };

    if (result == n) {
        printf("yes");
    } else {
        printf("no");
    }

    //printf("%d", result);

    return 0;
}
