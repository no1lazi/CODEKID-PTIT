#include <stdio.h>

int main(void) {
    int n, m;
    if (scanf("%d", &n) != 1) return 0;

    short a[100];
    for (int i = 0; i < n; ++i) {
        scanf("%hd", &a[i]);
    }
    scanf("%d", &m);
    m %= n; // Xử lý trường hợp m >= n

    // Đoạn 1: Từ m đến n - 1
    for (int i = m; i < n; ++i) {
        printf("%d ", a[i]);
    }
    // Đoạn 2: Từ 0 đến m - 1
    for (int i = 0; i < m; ++i) {
        printf("%d ", a[i]);
    }

    return 0;
}
