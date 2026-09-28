#include <stdio.h>

int main(void) {
    // Bảng kết quả đã được chứng minh bằng tổ hợp cho N từ 0 đến 9
    const int ans[] = {0, 0, 1, 9, 18, 90, 180, 900, 1800, 9000};

    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", ans[n]);
    }

    return 0;
}
