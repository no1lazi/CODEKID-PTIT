#include <stdio.h>

int main() {
    int n, a[105];
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        printf("Buoc %d:", i + 1);
        for (int k = 0; k < n; k++) {
            printf(" %d", a[k]);
        }
        printf("\n");
    }

    return 0;
}
