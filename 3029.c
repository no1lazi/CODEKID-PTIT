#include <stdio.h>

void solve() {
    char s[25];
    if (scanf("%s", s) != 1) return;

    for (int i = 0; s[i] != '\0'; i++) {
        // Nếu có chữ số lẻ, kết luận NO ngay lập tức
        if ((s[i] - '0') % 2 != 0) {
            printf("NO\n");
            return;
        }
    }

    // Tất cả các chữ số đều chẵn
    printf("YES\n");
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
