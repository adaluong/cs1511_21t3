// Program to do various linked list exercises
// Ada Luong, November 2021

#include <stdio.h>
#include <stdlib.h>

#include "list.h"
#include "helper_list.h"

/** PRESCRIBED FUNCTIONS **/

struct node *add_last(struct node *head, int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    // Return new if linked list is initially empty
    if (head == NULL) {
        return new;
    }

    // Otherwise, loop to end of list and add node.
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new;

    // We are inserting at the end --> head will not change
    return head;
}

void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

struct node *copy(struct node *list) {

    // CASE 1: we have an empty list
    if (list == NULL) {
        return NULL;
    }

    // CASE 2: we don't have an empty list
    struct node *new_head = create_node(list->data);
    struct node *new_prev = new_head;
    struct node *old_curr = list->next;
    
    while (old_curr != NULL) {
        struct node *new = create_node(old_curr->data);
        new_prev->next = new;

        new_prev = new_prev->next;
        old_curr = old_curr->next;
    }

    return new_head;
}

struct node *list_append(struct node *first_list, struct node *second_list) {
    
    // special case where the first list doesn't contain any nodes
    if (first_list == NULL) {
        return copy(second_list);
    }

    struct node *first_copy = copy(first_list);
    struct node *second_copy = copy(second_list);

    // iterate through the first list to get to the last node
    // of the first list
    struct node *curr = first_copy;
    while (curr->next != NULL) {
        curr = curr->next;
    }    

    curr->next = second_copy;

    return first_copy;
}

int identical(struct node *first_list, struct node *second_list) {
    return 5841;
}

struct node *set_intersection(
    struct node *first_list,
    struct node *second_list
) {
    return NULL;
}