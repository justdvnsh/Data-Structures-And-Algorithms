#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    // every character represents a particular number
    // lowercase character represents particular set of numbers , while uppercase characters represents different set of numbers.
    char c;
    for (int i = 'a' ; i <= 'z' ; i++) {
        printf("%c -> %d \n", i, i);
    }

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

    printf("%s \n", str); // %s is for strings,. // prints abc, since 4th element marks the end.

    /*
    * NOTE - double quotes are not allowed to store characters. "";
    * One must use the single quotes since , double quotes are used for strings.
    */

    // so , we must always include one extra space for '\0'
    char string1[8] = "divyansh";
    printf("String with 8 elements -> %s \n", string1); // it prints -> divyanshabc, since abc was the last string program worked with.
    // since , the string was 8 characters long , and we only alloted 8 characters , no space for '\0'
    char string2[9] = "divyansh";
    printf("String with 9 elements -> %s \n", string2); // prints divyansh , since it knows now where to end and has a particular
    // space for the end char.

    // the string.h library provides many useful functions to work for string.
    // strcmp -> to compare two strings.
    int result = strcmp(string1, string2);
    printf("The second string differs from the first string by %c letters. \n", result);

    return 0;
}
