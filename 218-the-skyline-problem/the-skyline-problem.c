#include <stdlib.h>

void swap(int **a, int **b) {
    int *t = *a;
    *a = *b;
    *b = t;
}

void push(int **heap, int *n, int right, int height) {
    int i = (*n)++;

    heap[i] = malloc(2 * sizeof(int));
    heap[i][0] = right;
    heap[i][1] = height;

    while (i > 0) {
        int p = (i - 1) / 2;

        if (heap[p][1] >= heap[i][1])
            break;

        swap(&heap[p], &heap[i]);
        i = p;
    }
}

void pop(int **heap, int *n) {
    free(heap[0]);

    (*n)--;

    if (*n == 0)
        return;

    heap[0] = heap[*n];

    int i = 0;

    while (1) {
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        int m = i;

        if (l < *n && heap[l][1] > heap[m][1])
            m = l;

        if (r < *n && heap[r][1] > heap[m][1])
            m = r;

        if (m == i)
            break;

        swap(&heap[i], &heap[m]);
        i = m;
    }
}

int** getSkyline(int** buildings, int buildingsSize, int* buildingsColSize,
                 int* returnSize, int** returnColumnSizes) {

    int **heap = malloc(buildingsSize * sizeof(int *));
    int **ans = malloc((2 * buildingsSize + 1) * sizeof(int *));
    
    int n = 0;
    int i = 0;
    int k = 0;
    int last = 0;

    while (i < buildingsSize || n > 0) {

        int x;

        if (n == 0)
            x = buildings[i][0];
        else if (i == buildingsSize)
            x = heap[0][0];
        else if (buildings[i][0] < heap[0][0])
            x = buildings[i][0];
        else
            x = heap[0][0];

        while (i < buildingsSize && buildings[i][0] == x) {
            push(heap, &n, buildings[i][1], buildings[i][2]);
            i++;
        }

        while (n > 0 && heap[0][0] <= x)
            pop(heap, &n);

        int height = n > 0 ? heap[0][1] : 0;

        if (height != last) {
            ans[k] = malloc(2 * sizeof(int));
            ans[k][0] = x;
            ans[k][1] = height;
            k++;
            last = height;
        }
    }

    *returnSize = k;

    *returnColumnSizes = malloc(k * sizeof(int));

    for (i = 0; i < k; i++)
        (*returnColumnSizes)[i] = 2;

    free(heap);

    return ans;
}