#include <stdio.h>

void solve(int test_num) {
    int n, a[105], b[105];
    if (scanf("%d", &n) != 1) return;

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);

    // Sắp xếp đồng thời A tăng dần và B giảm dần
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // A tăng dần
            if (a[i] > a[j]) {
                int t = a[i]; a[i] = a[j]; a[j] = t;
            }
            // B giảm dần
            if (b[i] < b[j]) {
                int t = b[i]; b[i] = b[j]; b[j] = t;
            }
        }
    }

    // In kết quả
    printf("Test %d:\n", test_num);
    for (int i = 0; i < n; i++) {
        printf("%d %d ", a[i], b[i]);
    }
    printf("\n");
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        for (int i = 1; i <= t; i++) {
            solve(i);
        }
    }
    return 0;
}
