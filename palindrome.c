#include <stdio.h>
#include <stdlib.h>

int palindrome(int n) {
    int d,r = 0;
    int temp_n = n;

    while (temp_n > 0) {
        d = temp_n % 10;
        r = d + r*10;
        temp_n = temp_n/10;
    }

    if (r==n) {
        printf("yes");
    } else {
        printf("no");
    }
}

int main() {

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    palindrome(n);

    return 0;
}
