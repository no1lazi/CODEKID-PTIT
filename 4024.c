#include <stdio.h>

int main() {
    int n, a[100];
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Sắp xếp giảm dần (đổi chỗ nếu phần tử đứng trước nhỏ hơn phần tử đứng sau)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // In kết quả
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
