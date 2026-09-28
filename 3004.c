#include <stdio.h>

// Thuật toán Euclid tìm USCLN
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    long long a, b;
    if (scanf("%lld%lld", &a, &b) != 2) return 0;

    long long g = gcd(a, b);
    long long l = (a / g) * b;
    printf("%lld\n%lld\n", g, l);
    return 0;
}
