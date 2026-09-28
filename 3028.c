/* Tam giác Pascal là tam giác có công thức tính giá trị một vị trí bất kỳ như sau
(n,k) = n!/k!(n-k)!
Trong đó: n là hàng và k là cột.*/

#include <stdio.h>

// Hàm đệ quy tính giá trị tại hàng n, cột k trong tam giác Pascal
int C(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return C(n - 1, k - 1) + C(n - 1, k);
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d%c", C(i, j), (j == i ? '\n' : ' '));
        }
    }

    return 0;
}
