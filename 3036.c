#include <stdio.h>
#include <string.h>

int check(const char *s) {
    int len = (int)strlen(s);

    if (len % 2 == 0) {
        return 0;
    }

    int left = 0, right = len - 1;
    while (left <= right) {
        // Kiểm tra đối xứng (số thuận nghịch)
        if (s[left] != s[right]) {
            return 0;
        }

        // Kiểm tra chữ số lẻ
        if ((s[left] - '0') % 2 == 0) {
            return 0;
        }

        left++;
        right--;
    }

    return 1;
}

void solve(void) {
    char s[25];
    if (scanf("%s", s) != 1) return;

    if (check(s)) {
        puts("YES");
    } else {
        puts("NO");
    }
}

int main(void) {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
