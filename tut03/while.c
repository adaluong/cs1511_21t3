// COMP1511 Tut03 - while loops structure
// Ada Luong, September 2021

#include <stdio.h>

int main (void) {

    int i = 0;

    while (i < 10) {

        printf("spawning %d assignments\n", i);

        i = i + 1;
    }

    return 0;
}
