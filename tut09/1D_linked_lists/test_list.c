// Emily Chen & Tom Kunc
// runs some tests on lists
// has a function to quickly create a list

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"
#include "helper_list.h"

void test_create_list(void);
void test_add_last(void);
void test_delete_last(void);
void test_num_items(void);
void test_copy(void);
void test_identical(void);
void test_set_intersection(void);
void test_set_union(void);

int main(void) {

    // test_create_list();
    // test_add_last();
    // test_num_items();
    test_copy();
    // test_identical();
    // test_set_intersection();
    // test_set_union();

    printf("========== EVERYTHING IS WORKING PERFECTLY!! ==========\n");
    return EXIT_SUCCESS;
}

void test_add_last(void) {
    printf("==== Testing add_last ====\n");
    struct node *head = NULL;
    head = add_last(head, 1);
    print_list(head);

    head = add_last(head, 2);
    print_list(head);

    head = add_last(head, 3);
    print_list(head);

    head = add_last(head, 4);
    print_list(head);

    free_list(head);
}

void test_set_intersection(void) {
    printf("==== Testing Set_Intersection ===\n");
    int vals1[] = {1, 2, 3, 4, 5};
    int vals2[] = {3, 4, 5};
    int vals3[] = {6, 7, 8, 9, 10};

    struct node *test1 = create_list(vals1, 1);
    struct node *test2 = create_list(vals2, 1);
    struct node *test3 = create_list(vals1, 5);
    struct node *test4 = create_list(vals2, 3);
    struct node *test5 = create_list(vals3, 5);

    struct node *tmp;

    printf("-- Test 1: Empty lists --\n");
    tmp = set_intersection(NULL, NULL);
    assert(tmp == NULL);

    tmp = set_intersection(NULL, test1);
    assert(tmp == NULL);

    tmp = set_intersection(test2, NULL);
    assert(tmp == NULL);

    printf("-- Test 2: Single element lists --\n");
    tmp = set_intersection(test1, test1);
    assert(num_items(tmp) == 1);
    assert(tmp->data == 1);
    free_list(tmp);

    tmp = set_intersection(test1, test2);
    assert(num_items(tmp) == 0);
    assert(tmp == NULL);

    printf("-- Test 3: Disjoint --\n");
    tmp = set_intersection(test3, test5);
    assert(num_items(tmp) == 0);
    assert(tmp == NULL);

    printf("-- Test 4: Normal behavior --\n");
    tmp = set_intersection(test3, test4);
    assert(num_items(tmp) == 3);
    assert(tmp->data == 3);
    assert(tmp->next->data == 4);
    assert(tmp->next->next->data == 5);
    free_list(tmp);

    // free everything
    free_list(test1);
    free_list(test2);
    free_list(test3);
    free_list(test4);
    free_list(test5);

    printf("All tests passed! You are awesome!\n");
}

void test_identical(void) {
    printf("==== Testing Identical ===\n");

    int vals1[] = {1, 2, 3, 4, 5};
    int vals2[] = {1, 2, 3, 4, 5};
    int vals3[] = {1, 2, 3};
    int vals4[] = {5, 4, 3, 2, 1};

    struct node *test1 = create_list(vals1, 5);
    struct node *test2 = create_list(vals2, 5);
    struct node *test3 = create_list(vals3, 3);
    struct node *test4 = create_list(vals4, 5);

    printf("-- Test 1: Empty list --\n");
    assert(identical(NULL, NULL) == 1); // two empty lists are identical
    assert(identical(test1, NULL) == 0);    // check NULL works in either argument
    assert(identical(NULL, test1) == 0);


    printf("-- Test 2: Identical lists --\n");
    assert(identical(test1, test2) == 1);
    assert(identical(test2, test1) == 1);
    assert(identical(test3, test3) == 1);   // list is identical to itself

    printf("-- Test 3: Subset of list --\n");
    assert(identical(test3, test2) == 0);   // subset is not identical
    assert(identical(test1, test3) == 0);

    printf("-- Test 1: Same values diff order --\n");
    assert(identical(test1, test4) == 0);
    assert(identical(test4, test1) == 0);

    free_list(test1);
    free_list(test2);
    free_list(test3);
    free_list(test4);

    printf("All tests passed! You are awesome!\n");
}

void test_copy(void) {
    printf("==== Testing Copy ===\n");
    int vals[] = {1, 2, 3, 4, 5};
    struct node *test1 = create_list(vals, 1);
    struct node *test2 = create_list(vals, 5);
    struct node *copyT;

    // empty list
    printf("-- Test 1: Empty list --\n");
    copyT = copy(NULL);
    assert(copyT == NULL);

    // single element list
    printf("-- Test 2: Single element list --\n");
    copyT = copy(test1);
    assert(num_items(copyT) == 1);
    assert(copyT->data == test1->data);
    assert(&copyT != &test1);
    free_list(copyT);
    free_list(test1);

    // 5 element list
    printf("-- Test 3: 5-element list --\n");
    copyT = copy(test2);
    assert(num_items(copyT) == 5);
    // test data values are the same
    assert(copyT->data == test2->data);
    assert(copyT->next->data == test2->next->data);
    assert(copyT->next->next->data == test2->next->next->data);
    assert(copyT->next->next->next->data == test2->next->next->next->data);
    assert(copyT->next->next->next->next->data == test2->next->next->next->next->data);
    assert(copyT->next->next->next->next->next == NULL);
    assert(test2->next->next->next->next->next == NULL);
    // test addresses are different
    assert(&copyT != &test2);
    assert(&(copyT->next) != &(test2->next));
    assert(&(copyT->next->next) != &(test2->next->next));
    assert(&(copyT->next->next->next) != &(test2->next->next->next));
    assert(&(copyT->next->next->next->next) != &(test2->next->next->next->next));

    free_list(copyT);
    free_list(test2);


    printf("All tests passed! You are awesome!\n");
}

void test_create_list(void) {
    printf("==== Testing Create List ===\n");

    printf("-- Test 1--\n");
    int vals[] = {1, 2, 3, 4, 5};
    struct node *test = create_list(vals, 5);
    print_list(test);

    printf("-- Test 2--\n");
    struct node *test2 = create_list(vals, 0);
    print_list(test2);

    //free_list(test);
    test = NULL;
    //free_list(test2);
    test2 = NULL;
}

void test_num_items(void) {
    printf("==== Testing num_items ===\n");
    int vals[] = {1, 2, 3, 4, 5};
    struct node *test1 = create_list(vals, 0);
    struct node *test2 = create_list(vals, 5);
    struct node *test3 = create_list(vals, 1);

    assert(num_items(test1) == 0);
    assert(num_items(test2) == 5);
    assert(num_items(test3) == 1);

    free_list(test1);
    free_list(test2);
    free_list(test3);

    printf("All tests passed! You are awesome!\n");
}