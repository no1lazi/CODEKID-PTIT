#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    for (int k = 1; k <= t; k++) {
        int n, a[100];
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        printf("Test %d:\n", k);
        for (int i = 0; i < n; i++) {
            // Kiểm tra xem a[i] đã xuất hiện trước đó chưa
            int first = 1;
            for (int j = 0; j < i; j++) {
                if (a[j] == a[i]) {
                    first = 0;
                    break;
                }
            }
            if (!first) continue;

            // Đếm số lần xuất hiện của a[i]
            int cnt = 0;
            for (int j = i; j < n; j++) {
                if (a[j] == a[i]) cnt++;
            }

            printf("%d xuat hien %d lan\n", a[i], cnt);
        }
    }

    return 0;
}
