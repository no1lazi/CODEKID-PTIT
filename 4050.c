#include <stdio.h>

int main() {
    int n, m;
    while (scanf("%d %d", &n, &m) == 2) {
        int has_a[1005] = {0};
        int has_b[1005] = {0};

        // Đánh dấu các phần tử thuộc dãy a
        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            has_a[x] = 1;
        }

        // Đánh dấu các phần tử thuộc dãy b
        for (int i = 0; i < m; i++) {
            int x;
            scanf("%d", &x);
            has_b[x] = 1;
        }

        // Dòng 1: Tập giao A ∩ B
        for (int i = 1; i < 1000; i++) {
            if (has_a[i] && has_b[i]) {
                printf("%d ", i);
            }
        }
        printf("\n");

        // Dòng 2: Tập hiệu A - B
        for (int i = 1; i < 1000; i++) {
            if (has_a[i] && !has_b[i]) {
                printf("%d ", i);
            }
        }
        printf("\n");

        // Dòng 3: Tập hiệu B - A
        for (int i = 1; i < 1000; i++) {
            if (!has_a[i] && has_b[i]) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    return 0;
}
