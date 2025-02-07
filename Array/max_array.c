#include<stdio.h>
int main(){
    int arr[7];
    for(int i=0;i<=6;i++){
        printf("\n enter element no %d",i+1);
        scanf("%d",& arr[i]);
    }
    int max= -1;
    for(int i=0;i<=7;i++ ){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("the max element is %d",max);
    return 0;
}