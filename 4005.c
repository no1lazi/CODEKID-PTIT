#include <stdio.h>

void solve(void) {
    int n;
    scanf("%d", &n);

    int max_val = -1;
    short idx[100]; //
    int cnt = 0;

    for (int i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);

        if (x > max_val) {
            max_val = x;
            cnt = 0;
            idx[cnt++] = (short)i;
        } else if (x == max_val) {
            idx[cnt++] = (short)i;
        }
    }

    // Dòng 1: In giá trị lớn nhất
    printf("%d\n", max_val);

    // Dòng 2: In các vị trí (chỉ số tính từ 0)
    for (int i = 0; i < cnt; ++i) {
        printf("%d ", idx[i]);
    }
    putchar('\n');
}

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        solve();
    }

    return 0;
}
