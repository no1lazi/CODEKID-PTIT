#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        int c, sum = 0;
        // Bỏ qua khoảng trắng / ký tự xuống dòng
        while ((c = getchar()) <= ' ' && c != EOF);

        // Cộng trực tiếp giá trị từng chữ số không cần phép chia
        while (c >= '0' && c <= '9') {
            sum += c - '0';
            c = getchar();
        }

        // Kiểm tra chia hết cho 10
        puts(sum % 10 == 0 ? "YES" : "NO");
    }

    return 0;
}
