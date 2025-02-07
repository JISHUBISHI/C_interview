#include<stdio.h>
int main(){
    struct person{
        char  name[50];
        int salary;
        int age;
    } person1,person2;
    
    printf("Enter the name of person1: ");
    scanf("%s",person1.name);
    
    printf("Enter the salary of person1: ");
    scanf("%d",&person1.salary);
    
    printf("Enter the age of person1: ");
    scanf("%d",&person1.age);
    
    printf("\nEnter the name of person2: ");
    scanf("%s",person2.name);
    
    printf("Enter the salary of person2: ");
    scanf("%d",&person2.salary);
    
    printf("Enter the age of person2: ");
    scanf("%d",&person2.age);
    printf("the name of the first person is:-%s\n",person1.name);
    printf("the age of the second persobn is:-%d",person2.age);


    
    return 0;
}