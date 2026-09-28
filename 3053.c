#include <stdio.h>

#define MAX 10000

static char is_prime[MAX + 1];

void sieve() {
    for (int i = 2; i <= MAX; i++) {
        is_prime[i] = 1;
    }
    for (int i = 2; i * i <= MAX; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                is_prime[j] = 0;
            }
        }
    }
}

void solve() {
    int n;
    if (scanf("%d", &n) != 1) return;

    for (int p = 2; p <= n / 2; p++) {
        if (is_prime[p] && is_prime[n - p]) {
            printf("%d %d ", p, n - p);
        }
    }
    printf("\n");
}

int main() {
    sieve();

    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
