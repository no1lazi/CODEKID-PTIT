#include <stdio.h>

void solve(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return;

    long long max_prime = -1;

    if (n % 2 == 0) {
        max_prime = 2;
        while (n % 2 == 0) {
            n /= 2;
        }
    }

    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            max_prime = i;
            while (n % i == 0) {
                n /= i;
            }
        }
    }

    if (n > 1) {
        max_prime = n;
    }

    printf("%lld\n", max_prime);
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
