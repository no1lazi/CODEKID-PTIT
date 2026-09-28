#include <stdio.h>

void solve(void) {
    int n, x;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &x);
        if ((x & 1) == 0) {
            printf("%d ", x);
        }
    }
    putchar('\n');
}

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        solve();
    }

    return 0;
}
