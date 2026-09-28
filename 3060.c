#include <stdio.h>

int count_two(int n) {
    int count = 0;
    while (n > 0) {
        count += n / 2;
        n /= 2;
    }
    return count;
}

int main(void) {
    int n, k;
    while (scanf("%d %d", &n, &k) == 2) {
        if (count_two(n) >= k) {
            puts("Yes");
        } else {
            puts("No");
        }
    }
    return 0;
}
