#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int reverse_num(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

void solve(void) {
    int n;
    if (scanf("%d", &n) != 1) return;

    int rev = reverse_num(n);

    if (gcd(n, rev) == 1) {
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
