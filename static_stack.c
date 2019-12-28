#include <stdio.h>
#include <stdlib.h>
#define MAX 3 // define a maximum value for the stack array to hold.
int arr[MAX]; // defined the array.
int head = 0;

void push(int value) {
    if ( head == MAX) {
        printf("Stack Overflow \n");
    } else {
        arr[head] = value;
        printf("Pushed %d into the stack. \n", value);
        head++;
    }
}

int pop() {
    int popped_element;
    if ( head == -1 ) {
        printf("Stack underflow \n");
    } else {
        if (head == MAX) {
            head = MAX - 1;
        }
        popped_element = arr[head];
        arr[head] = 0;
        head--;
    }
    return popped_element;
}

void display(){
    for ( int i = 0; i < MAX; i++ ) {
        printf("%d \n", arr[i]);
    }
}

int main() {

    display();
    push(5);
    push(10);
    push(15);
    push(20);
    display();
    int value1 = pop();
    int value2=pop();
    int value3=pop();
    printf("Popped elements are %d %d %d \n", value1, value2, value3);
    int value4 = pop();
    display();
    return 0;
}
