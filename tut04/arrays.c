// COMP1511 Tut04 - initialising and printing an array demo
// Ada Luong, October 2021

#include <stdio.h>

#define SIZE 5

void print_array(int numbers[], int length);

int main (void) {

    // int num1 = 1;
    // int num2 = 2;
    // int num3 = 3;
    // int num4 = 4;
    // int num5 = 5;

    // declaring and initialising an array of size 5
    int numbers[SIZE] = {1,2,3,4,5};

    // declaring an array and initialising every element to zero 
    int zeroes[SIZE] = {0};

    // declaring an array and initialising every element to one? 
    int ones[SIZE] = {0};

    int i = 0;
    while (i < SIZE) {
        ones[i] = 1;
        i++;
    }

    // printing every element of an array
    print_array(numbers, SIZE);

    // what's the issue with accessing the array[5]
    // 0.... n - 1
    // printf("%d", numbers[5]);
    // try gcc -o arrays arrays.c --> won't throw an error which is BAD

    return 0;
}

// Printing the elements of an array
void print_array(int numbers[], int length) {

    int j = 0;
    while (j < length) {
        printf("array[%d] = %d\n", j, numbers[j]);
        j++;
    }

}

/* THINGS TO KEEP NOTE OF
 * Declaring variable type
 * Naming the array
 * Size of the array
 * Initialising elements
 * Initialising all elements to zero 
 * Printing elements of an array
 * Printing in a function - the length parameter
 */