#include <stdio.h>

int n, x, a, b = -2e9;
int main() {
    scanf("%d%d", &n, &a);
    while (--n && scanf("%d", &x)) {
        if (x > a) b = a, a = x;
        else if (x < a && x > b) b = x;
    }
    printf("%d %d\n", a, b);
}
