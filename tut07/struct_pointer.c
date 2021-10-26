// COMP1511 Tut 07 - Struct Pointers
// Ada Luong, October 2021

#include <stdio.h>

#define MAX_NAME_LENGTH 100

struct student {
    int zID;
    double wam;
    char name[MAX_NAME_LENGTH];
}

int main (void) {

    // create a variable called stu of type struct student
    struct student stu;

    // create a pointer to the variable stu (type struct student)
    struct student *stu_pointer = &stu;

    // access the fields of the struct and change it
    stu.zID = 511111111;
    stu.wam = 0;
    strncpy(stu.name, "Alice", MAX_NAME_LENGTH); // when working with strings

    // accessing the fields of thes struct with pointers
    (*stu_pointer).zID = 300000;
    (*stu_pointer).wam = 1000;
    strncpy((*stu_pointer).name, "Bob", MAX_NAME_LENGTH);

    // accessing the fields of the struct with pointers WITH THE SHORTCUT
    stu_pointer->zID = 10000;
    stu_pointer->wam = 0;
    strncpy(stu_pointer->name, "Bob2", MAX_NAME_LENGTH);

    return 0;
}