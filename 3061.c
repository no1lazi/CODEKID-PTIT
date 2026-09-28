// Một số được coi là đẹp nếu chữ số đầu gấp đôi chữ số cuối hoặc ngược lại; đồng thời các chữ số  từ vị trí thứ 2 đến gần cuối thỏa mãn là một số thuận nghịch.

#include <stdio.h>
#include <string.h>

void solve() {
    char s[25];
    if (scanf("%s", s) != 1) return;

    int len = strlen(s);
    int first = s[0] - '0';
    int last = s[len - 1] - '0';

    // Điều kiện 1: Chữ số đầu gấp đôi chữ số cuối hoặc ngược lại
    if (first != 2 * last && last != 2 * first) {
        printf("NO\n");
        return;
    }

    // Điều kiện 2: Đoạn từ vị trí thứ 2 đến gần cuối là số thuận nghịch
    int left = 1;
    int right = len - 2;

    while (left < right) {
        if (s[left] != s[right]) {
            printf("NO\n");
            return;
        }
        left++;
        right--;
    }

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
