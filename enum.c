#include<stdio.h>
#include<stdlib.h>

// enum is basically a list of values which a variable can contain. So if you dont want a particular variable type , like int , float ,
// double , char etc. then you can use the enum keyword to define your own type variables.
// eg.

enum months {jan, feb, mar, apr, may, jun, jul, aug, sept, oct, nov, dec};
typedef enum months months; // typedef to define a shorthand for months enum.

int main() {

    // so now we can only define a variable with only a particular value from the enum months;

    months mon = aug;

    // we can also do all sorts of comparisons here.

    if (mon == jan) {
        printf("aug is not equal to jan.");
    } else if (mon > apr) {
        // here the enum just remembers the order of the values it was stored in.
        printf("aug comes after apr");
    }

    return 0;

}
