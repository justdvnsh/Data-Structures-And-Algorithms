#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    int arr[n];
    int *array = malloc(sizeof(int) * n);
    printf("Enter a number ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d \n", i);
    }

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
        printf("*arr[%d] = ", i);
        scanf("%d", &array[i]);
    }

    printf("---------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d \n", i, arr[i]);
    }


    for (int i = 0; i < n; i++) {
        printf("*arr[%d] = %d \n", i, array[i]);
    }

    return 0;
}
