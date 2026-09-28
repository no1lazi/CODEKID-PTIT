#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

long long dp[45][45];

void init(void) {
    for (int i = 1; i <= 40; ++i) {
        long long cur = i;
        dp[i][i] = cur;
        for (int j = i + 1; j <= 40; ++j) {
            cur = (cur / gcd(cur, j)) * j;
            dp[i][j] = cur;
        }
    }
}

void solve(void) {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return;

    // Đảm bảo n <= m
    if (n > m) {
        int tmp = n;
        n = m;
        m = tmp;
    }

    printf("%lld\n", dp[n][m]);
}

int main(void) {
    init();

    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
