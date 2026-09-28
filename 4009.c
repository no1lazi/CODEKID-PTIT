#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    short a[100];
    for (int i = 0; i < n; ++i) {
        scanf("%hd", &a[i]);
    }

    // In các phần tử chẵn
    for (int i = 0; i < n; ++i) {
        if ((a[i] & 1) == 0) {
            printf("%d ", a[i]);
        }
    }
    putchar('\n');

    // In các phần tử lẻ
    for (int i = 0; i < n; ++i) {
        if (a[i] & 1) {
            printf("%d ", a[i]);
        }
    }
    putchar('\n');

    return 0;
}
