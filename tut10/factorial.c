// COMP1511 Tut09 - Recursion 
// A function which returns the nth factorial
// Ada Luong, November 2021

#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("USAGE: ./factorial n\n");
        return 1;
    } 

    int num = atoi(argv[1]);

    int fac = factorial(num);
    printf("%d! = %d\n", num, fac);
    
    return 0;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}