#include <stdio.h>

void add_2D_arrays(int r, int c, int *arr, int *brr) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            *(arr + i * c + j) = *(arr + i * c + j) + (*(brr + i * c + j));
        }
    }
}

int main() {
    int r, c;
    
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int a[r][c], b[r][c];
    
    printf("Enter elements of the first array:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of the second array:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    add_2D_arrays(r, c, &a, &b);

    printf("The summed array is:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
