#include<stdio.h>
int main(){
    int num,digit,sum=0;
    printf("enter the number: ");
    scanf("%d",&num);
    printf("even digits: \n");
    while(num>0){
        digit=num%10;
        if(digit%2==0){
            printf("%d",digit);
            sum+=digit;
        }
        num/=10;
    }
    printf("sum of even digits %d\n", sum);
    return 0;
}