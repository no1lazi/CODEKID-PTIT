#include <stdio.h>

// Kiểm tra đồng thời: không chứa chữ số 9 và là số thuận nghịch
int is_valid(int x) {
    int temp = x, rev = 0;

    while (temp > 0) {
        int d = temp % 10;
        if (d == 9) return 0;
        rev = rev * 10 + d;
        temp /= 10;
    }

    return rev == x;
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int count = 0;

    // Xét các số lớn hơn 1 và nhỏ hơn n (từ 2 đến n - 1)
    for (int i = 2; i < n; ++i) {
        if (is_valid(i)) {
            printf("%d ", i);
            count++;
        }
    }

    // In số lượng trên dòng thứ 2
    printf("\n%d\n", count);

    return 0;
}
