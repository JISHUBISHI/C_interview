#include<stdio.h>
#include<string.h>
int main(){
    typedef struct Date{
        int Day;
        int month;
        int year;
    } Date;
    Date a,b;
    a.Day=1;
    a.month=1;  
    a.year=2000;

    b.Day = 2;
    b.month = 2;
    b.year = 2001;

    if(a.Day == b.Day){
        printf("Equal");
    }
    else{
        printf("unequal");
    }
    return 0;
}