#include <stdio.h>
#include <stdlib.h>

int t, n, k, l, r;
long long a[5005], x;

int cmp(const void *p, const void *q) {
    long long u = *(long long*)p, v = *(long long*)q;
    return u < v ? -1 : u > v;
}

int main() {
    for (scanf("%d", &t); t-- && scanf("%d", &n);) {
        for (int i = 0; i < n; i++) scanf("%lld", &x), a[i] = x * x;
        qsort(a, n, sizeof(long long), cmp);
        int ok = 0;
        for (k = n - 1; k >= 2 && !ok; k--)
            for (l = 0, r = k - 1; l < r;) {
                long long s = a[l] + a[r];
                if (s == a[k]) { ok = 1; break; }
                s < a[k] ? l++ : r--;
            }
        puts(ok ? "YES" : "NO");
    }
}
