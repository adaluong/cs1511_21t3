// COMP1511 Tut03 - 2D arrays
// Ada Luong, September 2021

#include <stdio.h>

int main(void) {

    // Scan the size of the square we want to print
    int square_size;
    printf("What size do you want your square: ");
    scanf("%d", &square_size);

    int row = 0;
    while (row < square_size) {

        int col = 0;
        while (col < square_size) {
            

            printf("*");

            col++;
        }

        printf("\n");       
        row++;
    }

    return 0;
}