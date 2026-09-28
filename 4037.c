#include <stdio.h>

int main() {
    int n, a[105];
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int res[105];
    int count = 0;

    for (int i = 0; i < n; i++) {
        // Kiểm tra xem a[i] đã được ghi nhận vào mảng kết quả chưa
        int already_added = 0;
        for (int j = 0; j < count; j++) {
            if (res[j] == a[i]) {
                already_added = 1;
                break;
            }
        }
        if (already_added) continue;

        // Đếm tần suất xuất hiện của a[i] trong toàn mảng
        int freq = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == a[i]) {
                freq++;
            }
        }

        // Nếu xuất hiện > 1 lần, thêm vào mảng kết quả
        if (freq > 1) {
            res[count++] = a[i];
        }
    }

    // In kết quả
    printf("%d\n", count);
    for (int i = 0; i < count; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");

    return 0;
}
