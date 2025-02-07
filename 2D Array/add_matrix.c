#include<stdio.h>
int main(){
    int r;
    printf("Enter the number of rows:-");
    scanf("%d",&r);
    int c;
    printf("Enter the number of coloum:-");
    scanf("%d",&c);
    int arr[r][c];
    int brr[r][c];
    int res[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            res[i][j]= arr[i][j]+brr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf(" %d ",res[i][j]);
        }
        printf("\n");
    }   
    
    return 0;
}
