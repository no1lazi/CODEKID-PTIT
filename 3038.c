#include <stdio.h>

void solve(void) {
    int n, p;
    if (scanf("%d %d", &n, &p) != 2) return;

    int ans = 0;
    while (n > 0) {
        ans += n / p;
        n /= p;
    }

    printf("%d\n", ans);
}

int main(void) {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
