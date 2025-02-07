#include<stdio.h>
int main(){
    int arr[7];
    for(int i=0;i<=6;i++){
        printf("\nenter the element no %d:-",i+1);
        scanf("%d",&arr[i]);
    }
    int x;
    printf("enter the number:-");
    scanf("%d",&x);
    int count=0;
    for(int i=0;i<=6;i++ ){
        if(arr[i]>=x){
            count+=1;
        }
    }
    printf("the number of element is %d",count);
    return 0;
}