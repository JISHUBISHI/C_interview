#include <stdio.h>

void add_2D_arrays(int r, int c, int arr[r][c], int brr[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            arr[i][j] += brr[i][j];
        }
    }
}

int main() {
    int r;
    printf("Enter the row:-");
    scanf("%d",&r);
    int c;
    printf("Enter the coloum:-");
    scanf("%d",&c);

    int arr[r][c];
    int brr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d ",&brr[i][j]);
        }
    }
    add_2D_arrays(r, c, arr, brr);

    printf("The summed array is:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
