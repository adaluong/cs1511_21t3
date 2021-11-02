// Week 8 Tutorial: Letters
// letters.c
//
// You must change this file.
//
// Implements the functions required.
//

#include "letters.h"

#define TRUE 1
#define FALSE 0

int check_letter(char ch) {

    if (ch >= 'a' && ch <= 'z') {
        return TRUE;
    } else if (ch >= 'A' && ch <= 'Z') {
        return TRUE;
    }

    return FALSE;
}