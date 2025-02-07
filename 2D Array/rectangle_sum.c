#include <stdio.h>
#include <limits.h>

int maxSumRectangle(int mat[][5], int n, int m)
{
    int maxSum = INT_MIN;

    for (int up = 0; up < n; up++)
    {

        for (int left = 0; left < m; left++)
        {

            for (int down = up; down < n; down++)
            {

                for (int right = left; right < m; right++)
                {

                    int subMatrixSum = 0;
                    for (int i = up; i <= down; i++)
                    {
                        for (int j = left; j <= right; j++)
                        {
                            subMatrixSum += mat[i][j];
                        }
                    }

                    if (subMatrixSum > maxSum)
                    {
                        maxSum = subMatrixSum;
                    }
                }
            }
        }
    }

    return maxSum;
}

int main()
{
    int mat[4][5] = {
        {1, 2, -1, -4, -20},
        {-8, -3, 4, 2, 1},
        {3, 8, 10, 1, 3},
        {-4, -1, 1, 7, -6}};

    int n = 4, m = 5;
    int result = maxSumRectangle(mat, n, m);
    printf("Maximum Sum of Rectangle: %d\n", result);

    return 0;
}
