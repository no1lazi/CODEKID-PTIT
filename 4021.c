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

    // Đoạn 1: In m phần tử cuối chuyển lên đầu (từ n - m đến n - 1)
    for (int i = n - m; i < n; ++i) {
        printf("%d ", a[i]);
    }
    // Đoạn 2: In các phần tử còn lại (từ 0 đến n - m - 1)
    for (int i = 0; i < n - m; ++i) {
        printf("%d ", a[i]);
    }

    return 0;
}
