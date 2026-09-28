#include <stdio.h>

int main() {
    int n, a[105];
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        int is_first = 1;
        for (int j = 0; j < i; j++) {
            if (a[j] == a[i]) {
                is_first = 0;
                break;
            }
        }
        if (is_first) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");

    return 0;
}
