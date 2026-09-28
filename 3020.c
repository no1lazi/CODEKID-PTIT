#include <stdio.h>


int sodep(int x) {
    int temp = x, rev = 0, sum = 0, has6 = 0;

    while (temp > 0) {
        int d = temp % 10;
        if (d == 6) has6 = 1;
        sum += d;
        rev = rev * 10 + d;
        temp /= 10;
    }

    return has6 && (sum % 10 == 8) && (rev == x);
}

int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) return 0;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; ++i) {
        if (sodep(i)) {
            printf("%d ", i);
        }
    }
    putchar('\n');

    return 0;
}
