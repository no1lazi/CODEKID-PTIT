#include <stdio.h>

char p[1000005];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 2; i * i < n; i++)
        if (!p[i])
            for (int j = i * i; j < n; j += i) p[j] = 1;

    for (int i = 2; i < n; i++)
        if (!p[i]) printf("%d\n", i);
}
