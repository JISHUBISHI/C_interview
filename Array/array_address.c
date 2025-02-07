#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        printf(" \nenter element number%d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%p \n",i);
    }
    
    return 0;
}