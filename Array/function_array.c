#include<stdio.h>
void fun(int arr[]){
    int temp = arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
    return ;
}
int main(){
    int arr[2];
    for(int i=0;i<=1;i++){
        printf("\n element number %d",i+1);
        scanf("%d",&arr[i]);
    }
    printf("%d %d\n",arr[0],arr[1]);
    fun(arr);
    printf("%d %d\n",arr[0],arr[1]);

    return 0;
}