#include <stdio.h>

void solve(int test_num) {
    int n;
    if (scanf("%d", &n) != 1) return;

    int a[105], dp[105];
    int max_len = 1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (i > 0 && a[i] > a[i - 1]) {
            dp[i] = dp[i - 1] + 1;
        } else {
            dp[i] = 1;
        }
        if (dp[i] > max_len) {
            max_len = dp[i];
        }
    }

    printf("Test %d:\n", test_num);
    printf("%d\n", max_len);

    for (int i = 0; i < n; i++) {
        if (dp[i] == max_len) {
            for (int j = i - max_len + 1; j <= i; j++) {
                printf("%d%c", a[j], (j == i ? '\n' : ' '));
            }
        }
    }
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        for (int i = 1; i <= t; i++) {
            solve(i);
        }
    }
    return 0;
}
