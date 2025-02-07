#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        if(i%2==0){
            printf("the even numbers are %d\n",i);
        }
        else{
            printf("the numbers are odd %d\n",i);
        }
    }
    return 0;
}