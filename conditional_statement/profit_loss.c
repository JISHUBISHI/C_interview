#include<stdio.h>
int main(){
    int cost,selling_price;
    printf("enter the cost");
    scanf("%d",&cost);
    printf("enter the selling price ");
    scanf("%d",&selling_price);
    if(cost<selling_price){
        printf("the total profit is %d",selling_price - cost);
    }
    else{
        printf("the total loss is %d",cost-selling_price);
    }
    return 0;
}