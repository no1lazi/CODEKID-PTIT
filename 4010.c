#include <stdio.h>

int main(void) {
    int n, x;
    if (scanf("%d", &n) != 1) return 0;

    int min1, min2, state = 0;

    while (n--) {
        scanf("%d", &x);
        if (!state) {
            min1 = x;
            state = 1;
        } else if (x < min1) {
            min2 = min1;
            min1 = x;
            state = 2;
        } else if (x > min1 && (state < 2 || x < min2)) {
            min2 = x;
            state = 2;
        }
    }

    printf("%d %d\n", min1, min2);
    return 0;
}
