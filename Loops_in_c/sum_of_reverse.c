#include<stdio.h>
int main(){
    int n,sum;
    printf("enter the number: ");
    scanf("%d",&n);
     int r=0;
    while(n!=0){
        r=r+(n%10);
        r=r*10;
        n=n/10;
    }
    r=r/10;
    
    printf("the reverse number is %d\n", r);
    sum=r+n;
    printf("the sum of the given number and it's reverse is %d",sum);
    return 0;

}