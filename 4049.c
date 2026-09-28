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

    long long a[1005];
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &a[i]);
    }


    printf("%lld", a[0]);

    for (int i = 1; i < n; ++i) {
        printf(" %lld", lcm(a[i - 1], a[i]));
    }

    printf(" %lld\n", a[n - 1]);
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
