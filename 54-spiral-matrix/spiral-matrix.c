/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int m = matrixSize, n = matrixColSize[0];
    int *ans = malloc(m * n * sizeof(int));
    int top = 0, bottom = m - 1, left = 0, right = n - 1, k = 0;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++)
            ans[k++] = matrix[top][i];
        top++;

        for (int i = top; i <= bottom; i++)
            ans[k++] = matrix[i][right];
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                ans[k++] = matrix[bottom][i];
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                ans[k++] = matrix[i][left];
            left++;
        }
    }

    *returnSize = k;
    return ans;
}