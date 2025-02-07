#include<stdio.h>
void decresing(int n){
    if(n==0) return;// base condition
    printf("%d\n",n);
    decresing(n-1);
    return;
}
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    decresing(n);
    return 0;
} 