#include <stdio.h>

void findMaxMin(int rows, int cols, int matrix[rows][cols], int *max, int *min) {
    *max = matrix[0][0];
    *min = matrix[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > *max) {
                *max = matrix[i][j];
            }
            if (matrix[i][j] < *min) {
                *min = matrix[i][j];
            }
        }
    }
}

int main() {
    int rows, cols;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    int matrix[rows][cols];
    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int max, min;
    findMaxMin(rows, cols, matrix, &max, &min);
    
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    
    return 0;
}
