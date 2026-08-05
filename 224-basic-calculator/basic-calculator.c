#include <stdlib.h>

int calculate(char *s) {

    int len = 0;
    while (s[len]) len++;

    long long *st = (long long *)malloc(sizeof(long long) * len);
    int top = -1;

    long long ans = 0;
    int sign = 1;

    for (int i = 0; i < len; i++) {

        if (s[i] >= '0' && s[i] <= '9') {

            long long num = 0;

            while (s[i] >= '0' && s[i] <= '9') {
                num = num * 10 + (s[i] - '0');
                i++;
            }

            ans += sign * num;
            i--;
        }

        else if (s[i] == '+') {
            sign = 1;
        }

        else if (s[i] == '-') {
            sign = -1;
        }

        else if (s[i] == '(') {
            st[++top] = ans;
            st[++top] = sign;
            ans = 0;
            sign = 1;
        }

        else if (s[i] == ')') {
            long long prevSign = st[top--];
            long long prevAns = st[top--];
            ans = prevAns + prevSign * ans;
        }
    }

    free(st);
    return (int)ans;
}