#include<stdio.h>
int main(){
    int arr[5];
    int sum1=0;
    for(int i=0;i<=4;i++){
        printf("\n enter the element no %d:-",i+1);
        scanf("%d",&arr[i]);
    }
    int sum2=0;
    for(int i=0;i<=4;i++){
        if(i%2==0){
            sum1=sum1+arr[i];
        }
        else{
            sum2=sum2+arr[i];

        }
    }
    int sum3=sum1-sum2;
    printf("the difference is %d",sum3);

    return 0;
}