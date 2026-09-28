#include <stdio.h>

int messigoat(int x) {
    if (x < 2) return 0;
    if (x == 2 || x == 3) return 1;
    if (x % 2 == 0 || x % 3 == 0) return 0;
    for (int i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return 0;
    }
    return 1;
}

// Kiểm tra tổng chữ số có chia hết cho 5 hay không
int sum_div5(int x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return (s % 5 == 0);
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int count = 0;

    // Duyệt các số nhỏ hơn n (bắt đầu từ số nguyên tố nhỏ nhất thỏa mãn là 5)
    for (int i = 5; i < n; ++i) {
        if (sum_div5(i) && messigoat(i)) {
            printf("%d ", i);
            count++;
        }
    }

    // In số lượng trên dòng thứ 2
    printf("\n%d\n", count);

    return 0;
}
