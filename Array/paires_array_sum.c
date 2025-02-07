#include<stdio.h>
int main(){
    int arr[8];
    for(int i=0;i<=7;i++){
        printf("\n enter the element no%d:-",i+1);
        scanf("%d",&arr[i]);
    }
    int totalpairs=0;
    int x;
    printf("enter the number:-");
    scanf("%d",&x);
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            if(arr[i]+arr[j]==x){
                totalpairs+=1;
            }
        }
    }
    printf("the pairs is %d",totalpairs);
    return 0;
}