#include <stdlib.h>
#include <string.h>

char* countAndSay(int n) {
    char *s = malloc(5000), *t = malloc(5000);
    strcpy(s, "1");

    for (int k = 1; k < n; k++) {
        int p = 0;

        for (int i = 0; s[i]; ) {
            int j = i;
            while (s[j] == s[i]) j++;

            p += sprintf(t + p, "%d%c", j - i, s[i]);
            i = j;
        }

        strcpy(s, t);
    }

    free(t);
    return s;
}