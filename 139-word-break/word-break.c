#include <stdbool.h>
#include <string.h>

bool wordBreak(char* s, char** wordDict, int wordDictSize) {
    int n = strlen(s);
    bool dp[301] = {0};
    dp[0] = true;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < wordDictSize; j++) {
            int len = strlen(wordDict[j]);
            if (i >= len && dp[i - len] &&
                strncmp(s + i - len, wordDict[j], len) == 0) {
                dp[i] = true;
                break;
            }
        }
    }

    return dp[n];
}