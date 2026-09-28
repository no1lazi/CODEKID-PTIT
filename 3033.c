#include <stdio.h>

void solve(void) {
    int n;
    if (scanf("%d", &n) != 1) return;

    printf("%d = ", n);
    int first = 1;

    if (n % 2 == 0) {
        int cnt = 0;
        while (n % 2 == 0) {
            cnt++;
            n /= 2;
        }
        printf("2^%d", cnt);
        first = 0;
    }

    for (int i = 3; 1LL * i * i <= n; i += 2) {
        if (n % i == 0) {
            int cnt = 0;
            while (n % i == 0) {
                cnt++;
                n /= i;
            }
            if (!first) printf(" * ");
            printf("%d^%d", i, cnt);
            first = 0;
        }
    }

    if (n > 1) {
        if (!first) printf(" * ");
        printf("%d^1", n);
    }
    printf("\n");
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
