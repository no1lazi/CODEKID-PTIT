#include <stdio.h>

void solve(int t, int n) {
    printf("Test %d:", t);

    // Tách riêng thừa số 2
    if (n % 2 == 0) {
        int cnt = 0;
        while (n % 2 == 0) {
            cnt++;
            n /= 2;
        }
        printf(" 2(%d)", cnt);
    }

    // Duyệt qua các số lẻ từ 3 đến sqrt(n)
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            int cnt = 0;
            while (n % i == 0) {
                cnt++;
                n /= i;
            }
            printf(" %d(%d)", i, cnt);
        }
    }

    // Nếu sau khi chia hết vẫn còn n > 1 thì n là số nguyên tố
    if (n > 1) {
        printf(" %d(1)", n);
    }

    putchar('\n');
}

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    for (int i = 1; i <= t; i++) {
        int n;
        scanf("%d", &n);
        solve(i, n);
    }

    return 0;
}
