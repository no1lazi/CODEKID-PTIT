#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        int n, a[100], c[100] = {0}, max_c = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            int found = -1;
            for (int j = 0; j < i; j++) {
                if (a[j] == a[i]) {
                    found = j;
                    break;
                }
            }
            if (found != -1) {
                if (++c[found] > max_c) max_c = c[found];
            } else {
                c[i] = 1;
                if (1 > max_c) max_c = 1;
            }
        }
        for (int i = 0; i < n; i++) {
            if (c[i] == max_c) printf("%d ", a[i]);
        }
        putchar('\n');
    }
    return 0;
}
