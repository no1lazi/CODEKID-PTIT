#include <stdio.h>

void solve(void) {
    long long n;
    scanf("%lld", &n);

    long long max_prime = -1;

    // Xử lý thừa số 2
    if (n % 2 == 0) {
        max_prime = 2;
        while (n % 2 == 0) n /= 2;
    }

    // Xử lý triệt để thừa số 3
    if (n % 3 == 0) {
        max_prime = 3;
        while (n % 3 == 0) n /= 3;
    }

    // Kiểm tra các ước dạng 6k +/- 1 (bước nhảy 6)
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0) {
            max_prime = i;
            while (n % i == 0) n /= i;
        }
        if (n % (i + 2) == 0) {
            max_prime = i + 2;
            while (n % (i + 2) == 0) n /= (i + 2);
        }
    }

    // Nếu sau khi chia hết các ước nhỏ, n vẫn > 1 thì n là số nguyên tố lớn nhất
    if (n > 1) {
        max_prime = n;
    }

    printf("%lld\n", max_prime);
}

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        solve();
    }

    return 0;
}
