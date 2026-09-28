// Một số nguyên dương được gọi là số thuận nghịch nếu viết theo chiều ngược lại vẫn có cùng giá trị với số ban đầu. Ví dụ số 121 là số thuận nghịch, số 123 không phải số thuận nghịch.
#include <stdio.h>
#include <string.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    char s[25];
    while (t--) {
        scanf("%s", s);

        int l = 0, r = strlen(s) - 1, ok = 1;
        while (l < r) {
            if (s[l++] != s[r--]) {
                ok = 0;
                break;
            }
        }

        puts(ok ? "YES" : "NO");
    }

    return 0;
}
