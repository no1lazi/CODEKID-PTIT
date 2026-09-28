#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void solve() {
    long long a, b, c, d;
    if (scanf("%lld %lld %lld %lld", &a, &b, &c, &d) != 4) return;

    if (gcd(a, b) == gcd(c, d)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
