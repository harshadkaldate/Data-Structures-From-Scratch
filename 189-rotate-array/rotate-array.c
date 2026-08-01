void rev(int *a, int l, int r) {
    while (l < r) {
        int t = a[l];
        a[l] = a[r];
        a[r] = t;
        l++;
        r--;
    }
}

void rotate(int* nums, int numsSize, int k) {
    k %= numsSize;void rev(int *a, int l, int r) {
    while (l < r) {
        int t = a[l];
        a[l] = a[r];
        a[r] = t;
        l++;
        r--;
    }
}

void rotate(int* nums, int numsSize, int k) {
    k %= numsSize;
    rev(nums, 0, numsSize - 1);
    rev(nums, 0, k - 1);
    rev(nums, k, numsSize - 1);
}
    rev(nums, 0, numsSize - 1);
    rev(nums, 0, k - 1);
    rev(nums, k, numsSize - 1);
}