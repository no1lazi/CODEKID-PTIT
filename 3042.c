#include <stdio.h>

// Hàm kiểm tra một số có phải số giảm hay không
int check(int n) {
    while (n >= 10) {
        int right = n % 10;
        int left = (n / 10) % 10;

        // Nếu chữ số đứng sau không nhỏ hơn chữ số đứng trước
        if (right >= left) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

void solve(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) return;

    int count = 0;
    for (int i = a; i <= b; ++i) {
        if (check(i)) {
            count++;
        }
    }

    printf("%d\n", count);
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
