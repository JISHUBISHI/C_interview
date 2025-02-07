#include<stdio.h>
int main(){
    int arr[7];
    for(int i=0;i<=6;i++){
        printf("\n the element no %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=6;i++ ){
        if(i%2!=0){
            arr[i]= arr[i]*2;
        }
        else{
            arr[i]+=10;
        }
    }
    for(int i=0;i<=6;i++){
        printf("the array is %d\n",arr[i]);

    }
    
    return 0;
}