// Tut07 - getchar and putchar
// Ada Luong, July 2021

#include <stdio.h>

int main (void) {

    int c; // use int not char
    c = getchar();     // int return_value = scanf("%c", &c); 

    while (c != EOF) { // while (return_value != EOF) {
        putchar(c);    //     printf("%c", c);
        c = getchar(); //     return_value = scanf("%c", &c);
    }                  // }

    return 0;
}

/* DISCUSSION QUESTION
 * What is EOF?
 * What does getchar() do?
 * What does putchar(..) do?
 * Why are we using an int to store a character? 
 */