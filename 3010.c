// Số Strong là số thỏa mãn có tổng giai thừa các chữ số của nó bằng chính nó. Ví dụ: 145 = 1! + 4! + 5!
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    const int strong[] = {1, 2, 145, 40585};
    for (int i = 0; i < 4; ++i) {
        if (strong[i] < n) {
            printf("%d ", strong[i]);
        }
    }

    return 0;
}
