#include <stdio.h>

int check(int n) {
    int temp = n, rev = 0, sum = 0;
    while (temp > 0) {
        int d = temp % 10;
        if (d == 4) return 0;
        sum += d;
        rev = rev * 10 + d;
        temp /= 10;
    }
    return (rev == n && sum % 10 == 0);
}

void solve() {
    int n;
    if (scanf("%d", &n) != 1) return;

    int start = 1;
    for (int i = 1; i < n; i++) start *= 10;
    int end = start * 10 - 1;

    for (int i = start; i <= end; i++) {
        if (check(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) solve();
    }
    return 0;
}
