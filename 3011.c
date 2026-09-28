#include <stdio.h>

int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) return 0;

    // Chuẩn hóa đảm bảo a <= b
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    // 4 số Strong duy nhất trong toán học
    const int strong[] = {1, 2, 145, 40585};
    for (int i = 0; i < 4; ++i) {
        if (strong[i] >= a && strong[i] <= b) {
            printf("%d ", strong[i]);
        }
    }

    return 0;
}
