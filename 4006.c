#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    short a[100];
    for (int i = 0; i < n; ++i) {
        scanf("%hd", &a[i]);
    }

    // Duyệt ngược từ cuối mảng về đầu
    for (int i = n - 1; i >= 0; --i) {
        printf("%d ", a[i]);
    }

    return 0;
}
