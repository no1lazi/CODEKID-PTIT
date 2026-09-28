#include <stdio.h>
#include <limits.h>

void solve() {
    int n;
    if (scanf("%d", &n) != 1) return;

    long long max_sum = LLONG_MIN;
    long long current_sum = 0;

    for (int i = 0; i < n; i++) {
        long long x;
        scanf("%lld", &x);

        current_sum += x;
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
        if (current_sum < 0) {
            current_sum = 0;
        }
    }

    printf("%lld\n", max_sum);
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
