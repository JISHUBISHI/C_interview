#include<stdio.h>
int main(){
    float b,e,m,p,c,percentage;
    printf("enter the number in bengali:-");
    scanf("%f",&b);
    printf("enter the number in ENGLISH:-");
    scanf("%f",&e);
    printf("enter the number in mathematics:-");
    scanf("%f",&m);
    printf("enter the number in physics :-");
    scanf("%f",&p);
    printf("enter the number in chemestry:-");
    scanf("%f",&c);
    percentage = (b+e+m+p+c) *100 /500;
    printf("the percentage of 5 subjects is:- %f",percentage);
    return 0;

}