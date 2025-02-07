#include<stdio.h>
int main(){
    int year;
    printf("enter the year:-");
    scanf("%d",year);
    if((year % 400==0)||(year % 4 ==0)||(year % 100==0)){
        printf("the year is leapyear");
    }
    else{
        printf("the year is not leapyear");
    }
    return 0;
}