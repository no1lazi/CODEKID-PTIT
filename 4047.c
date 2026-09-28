#include <stdio.h>
#include <stdlib.h>

typedef struct {
    long long t; // Thời điểm đến
    long long d; // Thời gian check-in
} Guest;

// Sắp xếp khách theo thời điểm đến tăng dần
int cmp(const void *a, const void *b) {
    const Guest *ga = (const Guest*)a;
    const Guest *gb = (const Guest*)b;
    if (ga->t < gb->t) return -1;
    if (ga->t > gb->t) return 1;
    return 0;
}

int main() {
    int n;
    while (scanf("%d", &n) == 1) {
        Guest g[105];
        for (int i = 0; i < n; i++) {
            scanf("%lld %lld", &g[i].t, &g[i].d);
        }

        // Sắp xếp theo thứ tự thời điểm đến
        qsort(g, n, sizeof(Guest), cmp);

        long long cur_time = 0;
        for (int i = 0; i < n; i++) {
            if (cur_time < g[i].t) {
                cur_time = g[i].t;
            }
            cur_time += g[i].d;
        }

        printf("%lld\n", cur_time);
    }
    return 0;
}
