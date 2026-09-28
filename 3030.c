#include <stdio.h>

// Hàm đệ quy sinh chữ số từ trái sang phải
// pos: vị trí chữ số hiện tại (1 -> n)
// last_digit: chữ số liền trước (đảm bảo d >= last_digit)
// val: giá trị số đang được xây dựng
void generate(int pos, int last_digit, int val, int n) {
    if (pos == n) {
        printf("%d ", val);
        return;
    }

    for (int d = last_digit; d <= 9; d++) {
        generate(pos + 1, d, val * 10 + d, n);
    }
}

void solve() {
    int n;
    if (scanf("%d", &n) != 1) return;

    // Chữ số đầu tiên phải từ 1 đến 9
    for (int d = 1; d <= 9; d++) {
        generate(1, d, d, n);
    }
    printf("\n");
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
