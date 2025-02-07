#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct Actor{
        char name[50];
        int age;
        char gender[10];
        int movies_count;
        char movies[10];
    }Actor;

    typedef struct legendaryactor{
        Actor actor;
        int award_count;
        char awards[10];
        char notable_movies[10];
    }legendaryactor;
    legendaryactor Dilip;
    strcpy(Dilip.actor.name, "Dilip Kumar");
    Dilip.actor.age = 55;
    strcpy(Dilip.actor.gender, "Male");
    Dilip.actor.movies_count = 10;
    strcpy(Dilip.actor.movies, "The Godfather, Inception, Pulp Fiction, The Dark Knight, The Shawshank Redemption, Schindler's List, The Lord of the Rings, The Matrix, The Departed, The Green Mile");
    strcpy(Dilip.awards, "Nominated for 6 Oscars, 3 Golden Globes, 1 BAFTA Award");
    strcpy(Dilip.notable_movies, "The Godfather, Inception, The Dark Knight, Schindler's List");
    printf("Name: %s\n", Dilip.actor.name);
    printf("Age: %d\n", Dilip.actor.age);
    printf("Gender: %s\n", Dilip.actor.gender);
    printf("Movies Count: %d\n", Dilip.actor.movies_count);
    printf("Movies: %s\n", Dilip.actor.movies);
    printf("Awards: %s\n", Dilip.awards);
    printf("Notable Movies: %s\n", Dilip.notable_movies);

    

    return 0;
}