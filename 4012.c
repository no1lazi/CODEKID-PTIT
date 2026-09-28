#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int a[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int found = 0;

    for (int i = 0; i < n; i++) {
        // 1. Kiểm tra xem a[i] đã xuất hiện trước đó chưa
        int first_time = 1;
        for (int j = 0; j < i; j++) {
            if (a[j] == a[i]) {
                first_time = 0;
                break;
            }
        }
        if (!first_time) continue;

        // 2. Đếm số lần xuất hiện của a[i]
        int count = 0;
        for (int j = i; j < n; j++) {
            if (a[j] == a[i]) count++;
        }

        // 3. In ra nếu xuất hiện > 1 lần
        if (count > 1) {
            printf("%d ", a[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("0");
    }
    printf("\n");

    return 0;
}
