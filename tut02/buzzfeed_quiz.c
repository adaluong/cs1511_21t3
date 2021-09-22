// COMP1511 Tut02 - variables, if statements, program flow
// Quiz to determine what kind of pasta you are
// Read this alongside questions and notes in tut02.md
// Ada Luong & W09C, September 2021

#include <stdio.h>

#define TITANIC             1
#define AVENGERS_ENDGAME    2
#define SHARK_TALE          3

int main (void) {

    printf("WHAT KIND OF PASTA ARE YOU?????\n");

    /* SETTING UP "TYPES OF PASTA" VARIABLES */
    int good_pasta_counter = 0;
    int bad_pasta_counter = 0;

    /* QUESTION ONE: ENTER A NUMBER */
    printf("\nHow many pets would you like to have?\n");
    int number_of_pets;
    scanf("%d", &number_of_pets);
  
    // checking that scanf works
    printf("You want %d number of pets!?!?!?!\n", number_of_pets);

    if (number_of_pets > 5) {
        good_pasta_counter = good_pasta_counter + 5;

    } else if (number_of_pets == 0) {
    	printf("You have no pets");
        bad_pasta_counter += 2;
    }

    if (number_of_pets <= 5 && number_of_pets > 0){
        good_pasta_counter = good_pasta_counter + 2;
    } 

    // printf("GOOD PASTA %d | BAD PASTA %d \n", good_pasta_counter, bad_pasta_counter);

    /* QUESTION TWO: THREE MOVIE CHOICES */

    printf("\nWhich movie out of these three would you most want to watch now?\n");
    printf("Type in a number from the options below\n");
    printf("1: Titanic \n");
    printf("2: Avengers Endgame\n");
    printf("3: Shark Tale\n");

    int movie_option = 0;
    scanf("%d", &movie_option);

    if (movie_option == TITANIC) {
        bad_pasta_counter += 10;

    } else if (movie_option == AVENGERS_ENDGAME) {
        good_pasta_counter += 1;
        bad_pasta_counter -= 2;
    
    } else if (movie_option == SHARK_TALE) {
        good_pasta_counter += 20;
    
    } else {
        bad_pasta_counter += 100;
    }

    /* DECIDING WHAT PASTA YOU ARE */
    if (good_pasta_counter > bad_pasta_counter) {
        printf("you are good pasta uwu :)\n");
    } else {
        printf("YOU ARE BAD PASTA :((\n");
    }    

    return 0;
}