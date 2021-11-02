// An introduction into linked lists using student structs
// Patrick Chambers (z5264081) 3/11/21
​
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
​
#define MAX_NAME_LENGTH 128
​
struct student {
    int zID;
    double mark;
    char name[MAX_NAME_LENGTH];
    struct student *next;
};
​
struct student *create_student(int zID, double mark, char *name);
​
int main(void) {
​
    // Create all the students and assign their pointers to these variables
    struct student *harry = create_student(5000000, 71.3, "Harry");
    struct student *lucy = create_student(5111111, 62.9, "Lucy");
    struct student *fatima = create_student(5222222, 67.7, "Fatima");
    struct student *carlos = create_student(5333333, 87.5, "Carlos");
    struct student *feng = create_student(5444444, 83.5, "Feng");
​
    // Link the students by making them point at each other
    // harry --> lucy --> fatima --> carlos --> feng --> NULL
    harry->next = lucy;
    lucy->next = fatima;
    fatima->next = carlos;
    carlos->next = feng; 
    // feng already points at NULL (set in create_student function)
​
​
    // This code works! But it's really inflexible and you might go off the 
    // end of the list
​
    // printf("Name: %s\n", harry->name);
    // printf("Name: %s\n", harry->next->name);
    // printf("Name: %s\n", harry->next->next->name);
    // printf("Name: %s\n", harry->next->next->next->name);
    // printf("Name: %s\n", harry->next->next->next->next->name);
​
​
    // Loop through the linked list with a struct student pointer that starts 
    // at the head of the list
    struct student *current = harry;
    while (current != NULL) {
        printf("Name: %s\n", current->name);
        // Move the current pointer to point at the next struct in the list
        current = current->next;
    }
​
    return 0;
}
​
​
// Creates a new struct student and returns a pointer to it
// Initialises the fields of the struct to the values given in function args
struct student *create_student(int zID, double mark, char *name) {
    struct student *new_student = malloc(sizeof(struct student));
    new_student->zID = zID;
    new_student->mark = mark;
    strcpy(new_student->name, name);
    new_student->next = NULL;
​
    return new_student;
}