#include<stdio.h>
int main(){
    int r;
    printf("Enter the number of rows:-");
    scanf("%d",&r);
    int m;
    printf("Enter the number of coloum:-");
    scanf("%d",&m);
    int arr[r][m];
    for(int i=0;i<r;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<m;j++){
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }   
    
    return 0;
}
