#include <stdio.h>

void solve(void) {
    int n;
    scanf("%d", &n);

    int a[100];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }

    int l = 0, r = n - 1, ok = 1;
    while (l < r) {
        if (a[l++] != a[r--]) {
            ok = 0;
            break;
        }
    }

    puts(ok ? "YES" : "NO");
}

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        solve();
    }

    return 0;
}
