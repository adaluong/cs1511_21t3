// COMP1511 Tut05 - Valid Functions
// Attempt to implement each of the functions that may or may not be valid
// in the Week 5 tutorial.
// Ada Luong, October 2021

#include <stdio.h>

int array_length(int nums[]);
int test_all_positive(int nums[]);
int test_all_initialized(int length, int nums[]);
int test_all_positive(int length, int nums[]);

int main(void) {

    int first_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int second_array[7] = {-6, 8, 1, -4, 3, 0, -4};
    
    return 0;
}

// Gets the length of the array
// Takes in an array
// Returns the length of the array
int array_length(int nums[]) {
    // NOT POSSIBLE
}

// Tests all values in the array are positive
// Takes in an array
// Returns 1 if each value is positive and 0 if not
int test_all_positive(int nums[]) {

}

// Tests all values in the array are initialised
// Takes in an array and its length
// Returns 1 if each value is initialised and 0 if not
int test_all_initialized(int length, int nums[]) {

}

// Tests all values in the array are positive
// Takes in an array and its length
// Returns 1 if each value is positive and 0 if not
int test_all_positive(int length, int nums[]) {
    int i = 0;
    while (i < length) {

        if (num[i] <= 0) {
            return 0;
        }

        i++;
    }
}