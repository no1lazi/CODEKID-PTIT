#include <stdio.h>

static const int coins[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

void solve() {
    int n;
    if (scanf("%d", &n) != 1) return;

    int ans = 0;
    for (int i = 0; i < 10; i++) {
        ans += n / coins[i];
        n %= coins[i];
    }

    printf("%d\n", ans);
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
