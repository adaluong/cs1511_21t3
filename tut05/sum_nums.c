// Write a void function which places the sum of two numbers
// inside a variable passed in by reference.

#include <stdio.h>

// int add_two_numbers(int a, int b);
void add_two_numbers_pointers(int a, int b, int *sum);

int main(void) {
    
    int a = 10;
    int b = 2;

    // without pointers:
    // int sum = add_two_numbers(a, b);

    // with pointers:
    int sum;
    add_two_numbers_pointers(a, b, &sum);
    
    printf("The sum of a and b is %d\n", sum);

    return 0;
}

void add_two_numbers_pointers(int a, int b, int *sum) {
    // a + b = 10 + 2
    // int *sum = 0xffd;
    *sum = a + b;
}


int add_two_numbers(int a, int b) {
    int sum = a + b;
    return sum;
}