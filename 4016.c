#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    for (int k = 1; k <= t; k++) {
        int n, p[100], m = 0;
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            if (is_prime(x)) p[m++] = x;
        }

        // Sắp xếp m phần tử nguyên tố tăng dần
        for (int i = 0; i < m - 1; i++) {
            for (int j = i + 1; j < m; j++) {
                if (p[i] > p[j]) {
                    int tmp = p[i];
                    p[i] = p[j];
                    p[j] = tmp;
                }
            }
        }

        printf("Test %d:\n", k);
        for (int i = 0; i < m; ) {
            int j = i;
            while (j < m && p[j] == p[i]) j++;
            printf("%d xuat hien %d lan\n", p[i], j - i);
            i = j;
        }
    }

    return 0;
}
