#include<stdio.h>
int main(){
    int product = 1;
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("\nenter element number %d:- ",i+1);
        scanf("%d",&arr[i]);
        product = product * arr[i];

    }
    printf("the product of all elemnts is %d ", product);
    return 0;
}