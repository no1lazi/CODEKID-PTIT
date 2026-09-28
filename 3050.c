#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    if (n <= 2) {
        int u, v;
        if (n == 2) scanf("%d %d", &u, &v);
        puts("Yes");
        return 0;
    }

    // Đọc 2 cạnh đầu tiên để xác định đỉnh tâm ứng viên C
    int u1, v1, u2, v2;
    scanf("%d %d %d %d", &u1, &v1, &u2, &v2);

    int c = 0;
    if (u1 == u2 || u1 == v2) c = u1;
    else if (v1 == u2 || v1 == v2) c = v1;

    int ok = (c != 0);

    // Kiểm tra các cạnh còn lại có chứa đỉnh c không
    for (int i = 3; i < n; ++i) {
        int u, v;
        scanf("%d %d", &u, &v);
        if (ok && (u != c && v != c)) {
            ok = 0;
        }
    }

    puts(ok ? "Yes" : "No");
    return 0;
}
