#include <stdio.h>

int main(void) {
    int n, m, p;
    if (scanf("%d %d", &n, &m) != 2) return 0;

    short a[100], b[100];

    // Nhập mảng A
    for (int i = 0; i < n; ++i) scanf("%hd", &a[i]);

    // Nhập mảng B
    for (int i = 0; i < m; ++i) scanf("%hd", &b[i]);

    // Nhập vị trí chèn P
    scanf("%d", &p);

    // 1. In P phần tử đầu của mảng A
    for (int i = 0; i < p; ++i) {
        printf("%d ", a[i]);
    }

    // 2. In toàn bộ mảng B
    for (int i = 0; i < m; ++i) {
        printf("%d ", b[i]);
    }

    // 3. In các phần tử còn lại của mảng A
    for (int i = p; i < n; ++i) {
        printf("%d ", a[i]);
    }
    putchar('\n');

    return 0;
}
