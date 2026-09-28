#include <stdio.h>

int has_all_prime_digits(int n) {
    while (n > 0) {
        int d = n % 10;
        if (d != 2 && d != 3 && d != 5 && d != 7) return 0;
        n /= 10;
    }
    return 1;
}

int is_prime(int n) {
    if (n < 2) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

void solve() {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) return;

    int count = 0;
    for (int i = a; i <= b; i++) {
        if (has_all_prime_digits(i) && is_prime(i)) {
            count++;
        }
    }
    printf("%d\n", count);
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) solve();
    }
    return 0;
}
