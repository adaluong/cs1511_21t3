// COMP1511 Tut05 - 2D Arrays
// Modifying squares.c into a 2D array 
// Ada Luong, October 2021

#include <stdio.h>

#define SIZE 7

void print_array(int rows, int columns, int array[rows][columns]);

int main(void) {
    int row, column;

    int grid[SIZE][SIZE] = {0};

    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            grid[row][column] = 1;
            // printf("1"); // modify this array to contain 1
            column = column + 1;
        }
        // printf("\n");
        row = row + 1;
    }

    print_array(SIZE, SIZE, grid);
    
    return 0;
}

// Function to print the array
void print_array(int rows, int columns, int array[rows][columns]) {
    int r = 0;
    while (r < rows) {
        int c = 0;
        while (c < columns) {
            printf("%d", array[r][c]);
            c++;
        }
        printf("\n");
        r++;
    }
    printf("\n");
}

/* DISCUSSION POINTS
 - How would you change it so that a 2D array of ints was created and each 
   element was given the value of 1?
 - How would you then print out this array so it looked the same as the original output?
 - What are the benefits of storing the values of the grid in a 2D array?
 */