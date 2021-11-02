# Week 08 Tutorial Notes
### Multi-file Programs
* What is a **Header** file? What is its purpose?
* What is an **Implementation** file? What is its purpose?
* How do we compile a multi-file prokect?
* See: `letters.h`, `letters.c`, `main.c`

### Memory Allocation (malloc)
* What is `malloc()`
* What is `sizeof()`? What does it give us?
* Create an `int *` variable that points to memory allocated using malloc
* Malloc and structs code demo: `malloc.c`

### Linked Lists (by Patrick)
* Really exciting data structure!
* What is a linked list? How does it relate to structs in C?
* How can we modify `struct student` to contain a pointer to another `struct student`?
* Why does this new member have to be a pointer?
* Create two `struct student *`'s using the `create_student()` function from the malloc exercise.
* Now that we have two struct students, we can create our first linked list! How would we now link these structs such that harry contains a pointer to lucy? What value should the next pointer in the lucy struct have?
* How would we print out the zID of lucy by only using the harry variable?
* Having a linked list with 2 nodes is great, but what if we wanted to do 5? Add 3 more students to the linked list after the lucy node.
* If we wanted to print the name of all these students, how could that be done through only the harry variable?

### Assignment 2: CS Pizzeria
* [Specifications](https://cgi.cse.unsw.edu.au/~cs1511/21T3/flask_tutors.cgi/assignments/ass2/index.html) now released!
* Due 19 November (pls start early)
* Live Stream on Thursday