// Tut07 - sum_digits.c
//
// A program which reads characters from its input. 
// When the end of input is reached it should print a count of the 
// number of digits in its input and their sum.
//
// Ada Luong, October 2021

#include <stdio.h>
#include <ctype.h>

int main (void) {

    int digit_count = 0;
    int digit_sum = 0;

    int c; // use int not char
    c = getchar();
    
    while (c != EOF) {

        // check if c is a digit
        // isdigit(c) == 0
        if (c >= '0' && c <= '9') { 
            digit_count += 1;
            // atoi function in C
            digit_sum += c - '0';
        }

        c = getchar();
    } 

    printf("the digit count is %d\n", digit_count);
    printf("the sum of the digits are %d\n", digit_sum);

    return 0;
}

/* DISCUSSION POINTS 
 * why getchar() and putchar() vs scanf() and printf()?
 * ascii representation of numbers vs their value
 */

