#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

void solve(void) {
    int n;
    if (scanf("%d", &n) != 1) return;

    long long ans = 1;
    for (int i = 2; i <= n; ++i) {
        ans = lcm(ans, i);
    }

    printf("%lld\n", ans);
}

int main(void) {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
