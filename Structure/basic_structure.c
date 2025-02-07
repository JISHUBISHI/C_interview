#include<stdio.h>
int main(){
    struct grade{
        int roll;
        float percentage;
        char grade;
    };
    struct grade Agnik;

    printf("Enter the Roll no:-");
    scanf("%d",&Agnik.roll);

    printf("Enter the percentage:-");
    scanf("%f",&Agnik.percentage);

    printf("Enter the  grade:-");
    scanf("%s",&Agnik.grade);

    struct grade Parthib;

    printf("Enter the Roll no:-");
    scanf("%d",&Parthib.roll);

    printf("Enter the percentage:-");
    scanf("%f",&Parthib.percentage);

    printf("Enter the grade:-");
    scanf("%s",&Parthib.grade);

    printf("\nAgnik's Details:\n");
    printf("Roll no:- %d\n",Agnik.roll);
    printf("Percentage:- %.2f\n",Agnik.percentage);
    printf("Grade:- %c\n",Agnik.grade);

    printf("\nParthib's Details:\n");
    printf("Roll no:- %d\n",Parthib.roll);
    printf("Percentage:- %.2f\n",Parthib.percentage);
    printf("Grade:- %c\n",Parthib.grade);
    return 0;
}