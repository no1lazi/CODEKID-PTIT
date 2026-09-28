#include <stdio.h>

int main() {
    int n, a[105];
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_idx]) {
                min_idx = j;
            }
        }

        int temp = a[i];
        a[i] = a[min_idx];
        a[min_idx] = temp;

        for (int k = 0; k < n; k++) {
            printf("%d%c", a[k], (k == n - 1 ? '\n' : ' '));
        }
    }

    return 0;
}
