#include <stdio.h>

// Thuật toán Euclid tìm ƯCLN
long long get_gcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        long long a, b;
        scanf("%lld %lld", &a, &b);

        long long gcd = get_gcd(a, b);
        long long lcm = (a / gcd) * b;

        printf("%lld %lld\n", lcm, gcd);
    }

    return 0;
}
