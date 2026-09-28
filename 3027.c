#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// Hàm tính tổng các chữ số của một số nguyên dương
int sum_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void solve(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) return;

    int g = gcd(a, b);
    int sum = sum_digits(g);

    if (is_prime(sum)) {
        puts("YES");
    } else {
        puts("NO");
    }
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
