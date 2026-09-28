// Một số Smith là một số tự nhiên thỏa mãn tổng các chữ số của nó bằng với tổng các chữ số của các thừa số nguyên tố của nó.

#include <stdio.h>

int s(int n) { int r = 0; for (; n; n /= 10) r += n % 10; return r; }

int n, o, f, c, i;

int main() {
    while (scanf("%d", &n) == 1) {
        o = n; f = c = 0;
        for (i = 2; 1LL * i * i <= n; i += (i > 2 ? 2 : 1)) {
            while (n % i == 0) {
                f += s(i);
                n /= i;
                c = 1;
            }
        }
        if (n > 1) f += s(n);
        puts(c && f == s(o) ? "YES" : "NO");
    }
}
