
#include <stdio.h>
#include <stdlib.h>

// structure is just a type of data structure to store a lot of variables inside them . Think of -> Objects in other languages
struct node {
    int value;
};

// This defines a shorthand for the struct. Means , we refer to this struct whenever we call node.
typedef struct node node;

int main()
{
    // defines the pointer . Pointer is a variable to store address.
    node *n;
    // Example of a pointer
    int a = 5;
    int *ptr = &a;
    printf("%i \n", ptr); // This would output -> 653478 or someting , that is random integer ( address of the variable a )

    printf("%i \n", *ptr); // This would output -> 5, the value of a.

    *ptr = 10;
    printf("ptr -> %i  a -> %i \n", *ptr, a); // This would output 10 and 10. Since the pointer points to the address of a , so if we change the
    // the value of pointer , the value of a would also change , since *ptr stores the address of a.

    int *arr = malloc(sizeof(int) * 10); // This is same as declaring int arr[10]. Difference is that , if we declare an array like
    // int arr[10] , then we have defined the size of the array (i.e. how many ints it can store). But , if we declare it through pointers
    // we can use operators like arr++, to increase one node (i.e. we can make a dynamic array , and now store 11 ints.)

    arr[0] = 12;
    printf("%i", arr[0]); // output -> 12
    return 0;
}
