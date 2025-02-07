#include<stdio.h>
int main(){
    int a;
    printf("enter the First number: ");
    scanf("%d",&a);
    int b;
    printf("enter the second number: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value of a is %d\n",a);
    printf("the value of b is %d",b);
    return 0;

    
}