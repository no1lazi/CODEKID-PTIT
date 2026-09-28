// Dãy số Fibonacci được định nghĩa theo công thức như sau:

// F1 = 1

// F2 = 1

// Fn = Fn-1 + Fn-2 với n>2

#include <stdio.h>

long long f[93];

void init(void) {
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= 92; ++i) {
        f[i] = f[i - 1] + f[i - 2];
    }
}

int main(void) {
    init();

    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        int n;
        scanf("%d", &n);

        printf("%lld\n", f[n]);
    }

    return 0;
}
