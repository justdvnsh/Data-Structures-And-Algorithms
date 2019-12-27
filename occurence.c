#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    char str[1000];
    gets(str);
    printf("%s \n", str);

    for (int i = 0; i < strlen(str); i++) {
        char c = str[i];
        c = tolower(c);
        str[i] = c;
    }

    printf("%s \n", str);

    char text[1000];

    for (int i = 0; i < strlen(str); i++) {
        int result = 0;
        for ( int j = 0; j < strlen(str); j++ ) {
            if ( i == str[j] ) {
                result++;
            }
        }
        if (result > 0) {
            printf("%c = %d\n", i, result);
        }
    }

    return 0;
}
