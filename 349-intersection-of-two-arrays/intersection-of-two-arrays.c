/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int seen1[1001] = {0};
    int seen2[1001] = {0};

    for (int i=0; i < nums1Size; i++)
        seen1[nums1[i]] = 1;

    for (int i=0; i <nums2Size; i++)
        seen2[nums2[i]] = 1;

    int *result = (int *)malloc(1001 * sizeof(int));
    *returnSize = 0;

    for (int i=0; i<=1000; i++) {
        if (seen1[i] && seen2[i])
            result[(*returnSize)++] = i;
    }

    

    return result;
    
}