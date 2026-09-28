
#include <stdio.h>

int is_prime(int x) {
    if (x < 2) return 0;
    if (x == 2 || x == 3) return 1;
    if (x % 2 == 0 || x % 3 == 0) return 0;
    for (int i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return 0;
    }
    return 1;
}

void solve(void) {
    int n, x;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &x);
        if (is_prime(x)) {
            printf("%d ", x);
        }
    }
    putchar('\n');
}

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        solve();
    }

    return 0;
}
