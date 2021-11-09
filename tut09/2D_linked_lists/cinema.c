
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cinema.h"
struct movie {
    char title[MAX_STR_LENGTH];
    int length;
    double rating;

    struct movie *next;
};

struct genre {
    char name[MAX_STR_LENGTH];

    struct movie *movies;
    struct genre *next;
};

struct cinema {
    struct genre *genres;
};

struct cinema *create_cinema() {
    struct cinema *new = malloc(sizeof(struct cinema));
    new->genres = NULL;

    return new;
}

void add_genre(struct cinema *cinema, char *genre_name) {
    struct genre *new = malloc(sizeof(struct genre));
    strcpy(new->name, genre_name);
    new->movies = NULL;
    new->next = NULL;

    new->next = cinema->genres;
    cinema->genres = new;
}

int add_movie(
    struct cinema *cinema,
    char *genre_name,
    char *movie_name,
    int length,
    double rating
) {

    // FIRST SUBPROBLEM
    
    // search for the target genre
    struct genre *curr_genre = cinema->genres;
    while (curr_genre != NULL && strcmp(curr_genre->name, genre_name) != 0) {
        curr_genre = curr_genre->next;
    }

    // what will curr_genre be if the genre was not found?
    if (curr_genre == NULL) {
        return NOT_FOUND;
    }

    // SECOND SUBPROBLEM

    // at this point, movie will always be added, so safe to malloc
    // initialise the fields of movie
    struct movie *new_movie = malloc(sizeof(struct movie));
    new_movie->length = length;
    new_movie->rating = rating;
    strcpy(new_movie->title, movie_title);

    new_movie->next = NULL;

    // case 1: head of the list (first movie of that genre)
    if (curr_genre->movies == NULL) {
        curr_genre->movies = new_movie;
        return SUCCESS;
    }

    // case 2: add to end of the list 
    struct movie *curr_movie = curr_genre->movies;
    while (curr_movie->next != NULL) {
        curr_movie = curr_movie->next;
    }

    curr_movie->next = new_movie;   

    return SUCCESS;
}

void print_genre(struct cinema *cinema, char *genre_name) {
    // TODO: Finish this function

    // find the appropriate genre
    
    // loop through the genre list and print title, rating, length of movies

}