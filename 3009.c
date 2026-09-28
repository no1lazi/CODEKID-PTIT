#include <stdio.h>

int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) return 0;

    // Đảm bảo a <= b
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    const int p[] = {6, 28, 496, 8128};
    for (int i = 0; i < 4; ++i) {
        if (p[i] >= a && p[i] <= b) {
            printf("%d ", p[i]);
        }
    }

    return 0;
}
