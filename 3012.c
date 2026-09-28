#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int a = 0, b = 1;
    while (a < n) {
        int next = a + b;
        a = b;
        b = next;
    }

    // Nếu dừng lại mà a == n thì n thuộc dãy Fibonacci (in 1), ngược lại in 0
    printf("%d\n", a == n);

    return 0;
}
