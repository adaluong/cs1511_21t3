#include <stdio.h>
#include <stdlib.h>

#include "list.h"

void handle_command(struct list *pancake, char command);

int main(void) {
    struct list *pancake = create_list();

    char command;
    while (scanf(" %c", &command) == 1) {
        handle_command(pancake, command);
    }
    return 0;
}

// Handles a command
void handle_command(struct list *pancake, char command) {
    char extra_data[MAX_STR_LENGTH];

    // TODO: Finish this function. Add more command conditions!
    //
    // Important commands:
    // - 'a' <name>: place new pancake onto pancake stack
    // - 'e':        eat top pancake
    // - 'p':        print pancake stack
    // 
    // -> X
    if (command == 'a') {
        fgets(extra_data, MAX_STR_LENGTH, stdin);
        push_head(pancake, extra_data);
        printf("Added: %s", extra_data);
    } else if (command == 'p') {
        print_list(pancake);
    } else if (command == 'e') {
        struct node *popped = pop_front(pancake);
        if (popped != NULL) {
            printf("The customer has eaten %s\n", popped->data);
            free(popped);
        } else {
            printf("you can't eat the plate lol\n");
        }
    }
}