#include <stdio.h>
#include <stdlib.h>

int t, n, cnt;
long long a[100005], m;

int cmp(const void *p, const void *q) {
    long long u = *(long long*)p, v = *(long long*)q;
    return u < v ? -1 : u > v;
}

int main() {
    for (scanf("%d", &t); t-- && scanf("%d", &n);) {
        for (int i = 0; i < n; i++) scanf("%lld", &a[i]);
        qsort(a, n, sizeof(long long), cmp);
        m = 3e9, cnt = 0;
        for (int i = 1; i < n; i++) {
            long long d = a[i] - a[i - 1];
            if (d < m) m = d, cnt = 1;
            else if (d == m) cnt++;
        }
        printf("%lld %d\n", m, cnt);
    }
}
