#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        int n, a[35];
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1]) {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
