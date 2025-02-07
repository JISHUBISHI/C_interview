#include<stdio.h>
void swap(int a,int b){
    int temp;
    a=temp;
    a=b;
    b=temp;
    return temp;
}
int main(){
    int n;
    printf("enter the first element: ");
    scanf("%d",&n);
    int r;
    printf("enter the second element: ");
    scanf("%d",&r);
    swap(n,r);
    printf("the first element is: %d\n",n);
    printf("the second element is:%d",r);

    return 0;
}