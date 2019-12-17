#include<stdio.h>
#include<stdlib.h>

// enum is basically a list of values which a variable can contain. So if you dont want a particular variable type , like int , float ,
// double , char etc. then you can use the enum keyword to define your own type variables.
// eg.

enum months {jan, feb, mar, apr, may, jun, jul, aug, sept, oct, nov, dec};
typedef enum months months; // typedef to define a shorthand for months enum.

// function that changes value to 5

// we take the pointer as an argument , where we pass the address of the variable.
// this is done so that we can change the value of a variable from a function .
void f(int *x) {
    *x = 5;
}

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

    // so now , how do we pass the pointers as arguments .
    int a = 100;
    f(&a);
    printf("\n a is %d", a);

    return 0;

}
