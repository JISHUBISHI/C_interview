#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    printf("enter the first number: ");
    scanf("%d",&a);
    printf("enter the second number: ");
    scanf("%d",&b);
    int power = pow(a,b);
    printf("%d power %d is %d",a,b,power);
    return 0;

}