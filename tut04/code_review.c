// Program to sum up two numbers given to the program by the user
// and print if the numbers entered are odd or even
//
// COMP1511 W09C, October 2021

#include <stdio.h>

#define TRUE    1
#define FALSE   0

int is_even(int num);
void print_odd_or_even(int num1, int num2);

int main(void) {

    int num1;
    int num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    int sum = num1 + num2;
    printf("Your numbers add up to %d\n", sum);

    print_odd_or_even(num1, num2);

    return 0;
}

// Print whether numbers entered in as parameters are odd or even
void print_odd_or_even(int num1, int num2) {
    if (is_even(num1) && is_even(num2)) {
        printf("Both the numbers you've typed were even\n"); 
    } else if (is_even(num1) && !is_even(num2)) {
        printf("The first number you've typed was even and the second number was odd\n");
    } else if (!is_even(num1) && is_even(num2)) {
        printf("The first number you've typed was odd and the second number was even\n");
    } else {
        printf("Both the numbers you've typed were odd\n");
    }
}

// Checks whether a given number is even or odd
// Returns 1 if number is even and 0 if number is odd
int is_even(int num) {
    if (num % 2 == 0) {
        return TRUE;
    } else {
        return FALSE;
    }
}