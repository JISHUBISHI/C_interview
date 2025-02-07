#include<stdio.h>
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int last_digit=0;
    int sum = 0;
    while(n!=0){
        last_digit=n%10;
        sum=sum+last_digit;
        n=n/10;

    }
    printf("the sum of digits are %d", sum);
    return 0;
    
}