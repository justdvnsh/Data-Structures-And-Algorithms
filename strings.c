#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    // so as we know a string is just an array of characters. So, every thing we can do with array , we can do with strings.
    // here is how it is defined.
    char str[11];

    // one thing to catch here is that , strings, since they are array of characters , they are stored similarly as array, but one
    // thing is different, that here we need to always store \0 at the end , to mark the end of the array.
    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    // \0 defines that this is the end of the string. \0 is written because it tells the char array (string) that use 0 as an integer
    // and not as a string.
    str[3] = '\0';
    str[4] = 'j';
    str[5] = 'k';

    printf("%s", str); // %s is for strings,. // prints abc, since 4th element marks the end.

    /*
    * NOTE - double quotes are not allowed to store characters. "";
    * One must use the
    */

    return 0;
}
