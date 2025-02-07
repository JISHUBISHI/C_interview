#include<stdio.h>
#include<stdio.h>
#include<stdbool.h>

typedef struct person{
    int age;
    float weight;
} person;


int main(){
    person p1, p2;
    person*x=&p1;
    person*y=&p2;
    
    printf("Enter age and weight of person 1: ");
    scanf("%d %f", &p1.age, &p1.weight);
    
    printf("Enter age and weight of person 2: ");
    scanf("%d %f", &p2.age, &p2.weight);
    
    printf("Person 1's age: %d, weight: %.2f\n", p1.age, p1.weight);
    printf("Person 2's age: %d, weight: %.2f\n", p2.age, p2.weight);
    
    bool is_older = p1.age > p2.age;
    printf("Person 1 is older than Person 2: %s\n", is_older? "Yes" : "No");
    
    printf("Swapping the ages and weights...\n");
    
    x->age = p2.age;
    x->weight = p2.weight;
    
    y->age = p1.age;
    y->weight = p1.weight;
    
    printf("After swapping:\n");
    printf("Person 1's age: %d, weight: %.2f\n", p1.age, p1.weight);
    printf("Person 2's age: %d, weight: %.2f\n", p2.age, p2.weight);
    


    return 0;
}