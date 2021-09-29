// COMP1511 Tut03 - common while loop errors
// Ada Luong, September 2021

#include <stdio.h>

int main (void) {

    int i = 0;

    while (i < 10)
        printf("i have %d friends\n", i);
        i = i + 1;

    return 0;
}

/* 

EXAMPLE 1 (FIXED)
int i = 0;

while (i < 100) {
    printf("%d\n", i);
    i = i + 1;
}

EXAMPLE 2 (FIXED)

int i = 0;
int j = 0;

while (j == 1 || i < 100) {
    printf("%d\n", i);
    i = i + 1;
}


EXAMPLE 3

int i = 0;
int n = 10;

while (i < n) {
    printf("%d\n", i);
    n = n + i;
    i = i + 1;
}

EXAMPLE 4

int i = 0;

while (i < 10)
    printf("%d\n", i);
    i = i + 1;

*/