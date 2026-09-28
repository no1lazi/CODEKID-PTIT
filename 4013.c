#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int a[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int res[100], count = 0;

    for (int i = 0; i < n; i++) {
        // Đếm số lần xuất hiện của a[i] trong toàn bộ mảng
        int freq = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == a[i]) {
                freq++;
            }
        }

        // Nếu chỉ xuất hiện đúng 1 lần, lưu vào mảng kết quả
        if (freq == 1) {
            res[count++] = a[i];
        }
    }

    // Dòng 1: In số lượng phần tử thỏa mãn
    printf("%d\n", count);

    // Dòng 2: In danh sách các phần tử thỏa mãn
    for (int i = 0; i < count; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");

    return 0;
}
