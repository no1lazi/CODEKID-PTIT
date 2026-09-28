// Số hoàn hảo là số có tổng các ước số (nhỏ hơn chính nó) bằng nó. Ví dụ: 6 = 1 + 2 + 3.
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    const int p[] = {6, 28, 496, 8128};
    for (int i = 0; i < 4; ++i) {
        if (p[i] < n) {
            printf("%d ", p[i]);
        }
    }

    return 0;
}
