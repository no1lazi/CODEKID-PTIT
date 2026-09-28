#include <stdio.h>

void solve() {
    int n;
    if (scanf("%d", &n) != 1) return;

    int a[1005];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int leaders[1005];
    int count = 0;
    int max_right = -1;

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] > max_right) {
            leaders[count++] = a[i];
            max_right = a[i];
        }
    }

    for (int i = count - 1; i >= 0; i--) {
        printf("%d%c", leaders[i], (i == 0 ? '\n' : ' '));
    }
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
