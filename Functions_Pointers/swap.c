#include<stdio.h>
int main(){
    int  a;
    printf("enter the first number:  ");
    scanf("%d",&a);
    int b;
    printf("enter the second number: ");
    scanf("%d",&b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("the value of a is %d\n",a);
    printf("the value  of b is %d",b);

    
    return 0;
}