#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        int n, x;
        scanf("%d", &n);

        int count = 0, max_val = 0;

        while (n--) {
            scanf("%d", &x);
            if (x >= max_val) {
                count++;
                max_val = x;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
