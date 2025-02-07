#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n,r;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("enter the value of r: ");
    scanf("%d",&r);
    int a=(n-r);
    int nfact=factorial(n);
    int rfact=factorial(r);
    int nrfact=factorial(a);

    int nCr=nfact/(rfact*nrfact);
    printf("the value of %dC%d id %d",n,r,nCr);

    return 0;
}