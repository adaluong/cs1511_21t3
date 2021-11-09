// Various helper functions for test_list.c

// creates a new linked list given an array of values
struct node *create_list(int values[], int size);

// creates a struct node with the given data value
// returns a pointer to this node
struct node *create_node(int dat);

// frees all the elements in a linked list
void free_list(struct node *head);

// return the number of items in the linked list
int num_items(struct node *head);