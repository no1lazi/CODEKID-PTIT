#include <stdio.h>

void solve() {
    int n = 0, even = 0, odd = 0;
    char c;

    do {
        int x;
        scanf("%d", &x);
        n++;
        if (x % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        // Đọc ký tự ngay sau số vừa nhập
        c = getchar();
    } while (c != '\n' && c != '\r' && c != EOF);

    // Kiểm tra điều kiện dãy ưu thế
    if ((n % 2 == 0 && even > odd) || (n % 2 != 0 && odd > even)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
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
