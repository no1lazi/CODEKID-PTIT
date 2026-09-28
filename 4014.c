#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int val[100];       // Lưu các giá trị phân biệt theo thứ tự xuất hiện
    short cnt[100];     // Lưu số lần xuất hiện tương ứng
    int u = 0;          // Số lượng phần tử phân biệt hiện có

    for (int i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);

        // Tìm xem x đã xuất hiện
        int found = -1;
        for (int j = 0; j < u; ++j) {
            if (val[j] == x) {
                found = j;
                break;
            }
        }

        // Nếu đã có thì tăng biến đếm, nếu chưa có thì thêm mới
        if (found != -1) {
            cnt[found]++;
        } else {
            val[u] = x;
            cnt[u] = 1;
            u++;
        }
    }

    // In kết quả: mỗi số và tần suất trên 1 dòng
    for (int i = 0; i < u; ++i) {
        printf("%d %d\n", val[i], cnt[i]);
    }

    return 0;
}
