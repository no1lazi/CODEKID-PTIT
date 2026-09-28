#include <stdio.h>

int main() {
    int n, a[105];
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;

        printf("Buoc %d:", i);
        for (int k = 0; k <= i; k++) {
            printf(" %d", a[k]);
        }
        printf("\n");
    }

    return 0;
}
