#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    long long sumU = 0, sumD = 0;
    long long minU = 1e9, minD = 1e9;

    for (int i = 0; i < n; i++) {
        long long u, d;
        scanf("%lld %lld", &u, &d);
        sumU += u;
        sumD += d;
        if (u < minU) minU = u;
        if (d < minD) minD = d;
    }

    long long opt1 = sumU + minD;
    long long opt2 = sumD + minU;
    long long result = (opt1 > opt2) ? opt1 : opt2;

    printf("%lld\n", result);
    return 0;
}
