#include <stdio.h>

int sum_so(int x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main(void) {
    int a, b;
    while (scanf("%d %d", &a, &b) == 2) {
        if (sum_so(a) > sum_so(b)) {
            printf("%d %d\n", b, a);
        } else {
            printf("%d %d\n", a, b);
        }
    }
    return 0;
}
