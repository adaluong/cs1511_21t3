// A function that checks whether a scanned number is even or not
// Patrick Chambers, z5264081
// 5/10/21

#include <stdio.h>

int is_even(int number);

int main(void) {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Print 1 if the number is even, or 0 if the number is odd
    printf("%d\n", is_even(num));
    
    return 0;
}

// Checks whether a given number is even or odd
// Returns 1 if number is even and 0 if number is odd 
int is_even(int number) {
    int odd_or_even = 0;
    if (number % 2 == 0) {
        odd_or_even = 1;
    }
    return odd_or_even;
}