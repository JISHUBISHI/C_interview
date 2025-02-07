#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct cricketer{
        char name[50];
        int age;
        int  no_of_matches;
        float batting_average;
    } cricketer;

void fun(cricketer p){
    printf("%d\n",p.age);
    return ;
}

int  main(){
    cricketer cricketer1;
    cricketer1.age = 25;
    fun(cricketer1);
    return 0;
}