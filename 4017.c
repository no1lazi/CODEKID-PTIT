#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int n, x;
    if (scanf("%d", &n) != 1) return 0;

    int res[100], count = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (is_prime(x)) {
            res[count++] = x;
        }
    }

    printf("%d", count);
    for (int i = 0; i < count; i++) {
        printf(" %d", res[i]);
    }
    printf("\n");

    return 0;
}
