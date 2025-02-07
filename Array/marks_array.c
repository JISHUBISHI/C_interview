#include<stdio.h>
int main(){
    int marks[10]={78,45,23,45,2,32,65,76,22,33};
    for(int i=0;i<=9;i++){
        if(marks[i]<35){
            printf("%d \n",i);
        }
    }
    return 0;
}