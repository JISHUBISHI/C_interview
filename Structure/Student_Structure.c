#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct student{
    char name[50];
    int roll_no;
    char department[50];
    char course[10];
    int joining_year;
    } student;
    
void departmet(student p, student q){
    if(strcmp(p.department, q.department) == 0){
        printf("Both students belong to the same department: %s\n", p.department);
    }
    else{
        printf("Both students belong to different departments: %s and %s\n", p.department, q.department);
    }
}    

int main(){
    student a,b;
    strcpy(a.name, "Student A");
    a.roll_no = 1;
    strcpy(a.department, "Computer Science");
    strcpy(a.course, "Bachelor's");
    a.joining_year = 2019;
    

    strcpy(b.name, "Student B");
    b.roll_no = 2;
    strcpy(b.department, "Mathematics");
    strcpy(b.course, "Bachelor's");
    b.joining_year = 2018;

    departmet(a,b);
    return 0;
}