#include <stdio.h>

char p[1000005];

int pal(int n) {
    int r = 0, t = n;
    for (; t; t /= 10) r = r * 10 + t % 10;
    return r == n;
}

int main() {
    for (int i = 2; i * i < 1000005; i++)
        if (!p[i])
            for (int j = i * i; j < 1000005; j += i) p[j] = 1;

    int t, a, b;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &a, &b);
        int c = 0;
        for (int i = a; i <= b; i++)
            if (!p[i] && pal(i)) {
                printf("%d ", i);
                if (++c % 10 == 0) puts("");
            }
        if (c % 10) puts("");
        puts("");
    }
}
