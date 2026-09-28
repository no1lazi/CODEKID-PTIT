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

int is_pure_prime(int x) {
    if (x > 5 && (x % 10 == 2 || x % 10 == 5)) return 0;

    int temp = x, sum = 0;
    while (temp > 0) {
        int d = temp % 10;
        if (d != 2 && d != 3 && d != 5 && d != 7) return 0;
        sum += d;
        temp /= 10;
    }

    if (!is_prime(sum)) return 0;

    return is_prime(x);
}

void solve(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b) {
        int t = a;
        a = b;
        b = t;
    }

    int count = 0;
    for (int i = a; i <= b; ++i) {
        if (is_pure_prime(i)) {
            count++;
        }
    }

    printf("%d\n", count);
}

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        solve();
    }

    return 0;
}
