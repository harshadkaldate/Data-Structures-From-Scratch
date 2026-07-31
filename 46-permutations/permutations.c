#include <stdlib.h>

int **ans, count, n;

void solve(int *a, int *used, int *p, int k) {
    if (k == n) {
        ans[count] = malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            ans[count][i] = p[i];
        count++;
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            used[i] = 1;
            p[k] = a[i];
            solve(a, used, p, k + 1);
            used[i] = 0;
        }
    }
}

int** permute(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    n = numsSize;
    count = 0;

    ans = malloc(720 * sizeof(int*));
    *returnColumnSizes = malloc(720 * sizeof(int));

    int used[6] = {0}, p[6];

    solve(nums, used, p, 0);

    for (int i = 0; i < count; i++)
        (*returnColumnSizes)[i] = n;

    *returnSize = count;
    return ans;
}