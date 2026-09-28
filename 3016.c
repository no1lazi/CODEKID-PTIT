#include <stdio.h>

void solve(void) {
    long long n;
    scanf("%lld", &n);

    if (n <= 1) {
        puts("YES");
        return;
    }

    long long a = 0, b = 1;
    while (b < n) {
        long long c = a + b;
        a = b;
        b = c;
    }

    puts(b == n ? "YES" : "NO");
}

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        solve();
    }

    return 0;
}
