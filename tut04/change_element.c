// COMP1511 Tut04 - pass by reference arrays
// Ada Luong, October 2021

// What will this code print before and after the function 
// is called? Is the output expected?

#include <stdio.h>

#define SIZE 1000

void change_array_element(int arr[SIZE], int index);

int main(void) {
    int array[SIZE] = {0};

    int index;
    printf("Enter index to change: ");
    scanf("%d", &index);

    printf("Before function: %d\n", array[index]);
    change_array_element(array, index);
    printf("After function: %d\n", array[index]);
}

// Change an element of an array at a given index to
// now have 42
void change_array_element(int arr[SIZE], int index) {
    arr[index] = 42;
}