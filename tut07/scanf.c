// COMP1511 Tut07 - scanf revision
// Ada Luong, October 2021

#include <stdio.h>

int main(void) {

    char ch;
    printf("Enter character: ");
    int scanf_return = scanf("%c", &ch);
    printf("Scanned in '%c'\n", ch);

    return 0;
}

/* DISCUSSION POINTS
 * how does scanf signal to us it has reached the end of input?
 * consider: valid input, invalid input, EOF
 */