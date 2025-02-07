#include<stdio.h>
int main(){
    int arr[8];
    for(int i=0;i<=7;i++){
        printf("\n enter the element no%d:-",i+1);
        scanf("%d",&arr[i]);
    }
    int totaltriplets=0;
    int x;
    printf("enter the number:-");
    scanf("%d",&x);
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            for(int k=j+1;k<=7;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                totaltriplets+=1;
                printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
            }
            
            }
        }
    }
    printf("total triplets is %d",totaltriplets);
    
    return 0;
}