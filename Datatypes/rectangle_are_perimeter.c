#include<stdio.h>
int main(){
    int A,P,l,b;
    printf("enter the length of the rectangle");
    scanf("%d",&l);
    printf("enter the bredth rectangle");
    scanf("%d",&b);
    A=l*b;
    P=2*(l+b);
    if(A>P){
        printf("the area is greater than perimeter of the rectangle%d",A);
    }
    else{
        printf("the perimeter is greater than area of the rectangle %d",P);
    }
    return 0;

}
