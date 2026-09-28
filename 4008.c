#include <stdio.h>

void solve(int test_num) {
    int n, m, p;
    scanf("%d %d %d", &n, &m, &p);

    int a[100];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }

    printf("Test %d:\n", test_num);

    // 1. In p phần tử đầu tiên của mảng a
    for (int i = 0; i < p; ++i) {
        printf("%d ", a[i]);
    }

    // 2. Vừa đọc vừa in trực tiếp các phần tử của mảng b (không cần lưu mảng b)
    for (int i = 0; i < m; ++i) {
        int x;
        scanf("%d", &x);
        printf("%d ", x);
    }

    // 3. In các phần tử còn lại của mảng a
    for (int i = p; i < n; ++i) {
        printf("%d ", a[i]);
    }
    putchar('\n');
}

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    for (int i = 1; i <= t; ++i) {
        solve(i);
    }

    return 0;
}
