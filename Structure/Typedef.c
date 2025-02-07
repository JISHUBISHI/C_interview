#include<stdio.h>
#include<string.h>
int main(){
    typedef struct Pokemon{
        char name[50];
        int speed;
        int hp;
        int attack;
        char tier;
    }pokemon;

    pokemon arr[3];

    strcpy(arr[0].name, "Pikachu");
    arr[0].speed = 90;
    arr[0].hp = 35;
    arr[0].attack = 55;
    arr[0].tier = 'A';
    
    strcpy(arr[1].name, "Charmander");
    arr[1].speed = 85;
    arr[1].hp = 39;
    arr[1].attack = 52;
    arr[1].tier = 'B';
    
    strcpy(arr[2].name, "Squirtle");
    arr[2].speed = 90;
    arr[2].hp = 35;
    arr[2].attack = 48;
    arr[2].tier = 'A';
    
    for(int i=0;i<3;i++){
        printf("Name: %s\n", arr[i].name);
        printf("Speed: %d\n", arr[i].speed);
        printf("HP: %d\n", arr[i].hp);
        printf("Attack: %d\n", arr[i].attack);
        printf("Tier: %c\n\n", arr[i].tier);
    }


    return 0;
}