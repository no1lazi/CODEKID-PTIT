//  Biết rằng một số được coi là thuận nghịch nếu viết ngược lại vẫn được giá trị như ban đầu (ví dụ: 8, 34543, 11233211).
#include <stdio.h>

// Đảo ngược số nguyên để kiểm tra thuận nghịch
int thuan_nghich(int x) {
    int temp = x, rev = 0;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == x;
}

int main(void) {
    int a, b;
    while (scanf("%d %d", &a, &b) == 2) {
        puts(thuan_nghich(a) != thuan_nghich(b) ? "YES" : "NO");
    }
    return 0;
}
