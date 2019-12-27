#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char str[10000];
    gets(str);
    printf("The string entered was %s \n and the length is %d \n", str, strlen(str));

    int i = 5;
    if ( strlen(str) > 10 ) {
        while(i < 10) {
            printf("%d th position is %c \n", i, str[i]);
            i++;
        };
    };

    return 0;
}
