// COMP1511 Tut 10 - Minimum Functions
// Ada Luong, November 2021

#include <stdio.h>
#include <limits.h>

// iterative approach
int minimum_iterative(struct node *head) {
    int minimum_number = INT_MAX;
    struct node *curr = head;
    while (curr != NULL) {
        if (curr->data < minimum_number) {
            minimum_number = curr->data;
        }
        curr = curr->next;
    }
    return minimum_number;
}

// recursive approach
int minimum_recursive(struct node* head) {

    if (head == NULL) {
        return INT_MAX;
    }

    int min = head->data;
    struct node *curr = head->next;
    while (curr != NULL) {
        if (min > curr->data) {
            min = curr->data;
        }
        curr = curr->next;
    }
    return min;
}