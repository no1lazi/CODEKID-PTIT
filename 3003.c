#include <stdio.h>

char p[1400005];

int main() {
    int n, c = 0;
    scanf("%d", &n);
    for (int i = 2; i * i < 1400005; i++)
        if (!p[i])
            for (int j = i * i; j < 1400005; j += i) p[j] = 1;

    for (int i = 2; c < n; i++)
        if (!p[i]) printf("%d\n", i), c++;
}
