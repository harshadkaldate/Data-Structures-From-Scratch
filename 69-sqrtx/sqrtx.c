int mySqrt(int x) {
    int l = 1, r = x, ans = 0;

    while (l <= r) {
        int m = l + (r - l) / 2;

        if (m <= x / m) {
            ans = m;
            l = m + 1;
        } else
            r = m - 1;
    }

    return ans;
}