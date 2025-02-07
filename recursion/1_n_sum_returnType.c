#include<stdio.h>
int sum(int n){
    if(n==1 || n==0) return 1;
    int sumAns=n+sum(n-1);
    return sumAns;
}
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int s = sum(n);
    printf("%d",s);
    return 0;
}