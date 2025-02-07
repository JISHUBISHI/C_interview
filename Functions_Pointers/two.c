#include<stdio.h>
void sum(){
    int a,b,c;
    printf("enter the First number: ");
    scanf("%d",&a);
    printf("enter the Second number: ");
    scanf("%d",&b);
    c=a+b;
    printf("The sum of two numbers are %d",c);
    return;

}
int main(){
    sum();
    return 0;
}