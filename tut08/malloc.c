// COMP1511 Tut 08 - Malloc Demo

#include <stdio.h>
#include <stdlib.h>
 #include <string.h>

#define MAX_NAME_LENGTH 200

struct student {
    int zID;
    double mark;
    char name[MAX_NAME_LENGTH];
};

struct student *create_student(int zID, double mark, char *name);

int main(void) {

    // Create an int * variable that points to
    // memory allocated using malloc
    int *integer_pointer = malloc(sizeof(int));
    printf("the address the pointer is storing is %p\n", integer_pointer);

    // creating a new student
    struct student *rhys = create_student(1, 10000, "Rhys");
    printf("Mark for %s with zID %d is %lf\n", rhys->name, rhys->zID, rhys->mark);

    return 0;
}

// Creates a new struct student and returns a pointer to it
struct student *create_student(int zID, double mark, char *name) {

    struct student *new_student = malloc(sizeof(struct student));

    // (*new_student).zID = zID;
    new_student->zID = zID;
    new_student->mark = mark;

    // assigning strings to fields of structs
    // new_student->name = name; // won't work use STRNCPY

    strncpy(new_student->name, name, MAX_NAME_LENGTH);

    return new_student;
}