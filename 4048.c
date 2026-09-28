#include <stdio.h>

#define MAXN 1005

int min(int a, int b) { return a < b ? a : b; }
int max(int a, int b) { return a > b ? a : b; }

int main() {
    int n, m, k;
    while (scanf("%d %d %d", &n, &m, &k) == 3) {
        int covered[MAXN] = {0};

        // Đánh dấu các vị trí đã được M chiếc đèn ban đầu chiếu sáng
        for (int i = 0; i < m; i++) {
            int x;
            scanf("%d", &x);
            int left = max(1, x - k);
            int right = min(n, x + k);
            for (int j = left; j <= right; j++) {
                covered[j] = 1;
            }
        }

        int additional_lights = 0;

        for (int i = 1; i <= n; i++) {
            if (!covered[i]) {
                additional_lights++;

                int pos = min(n, i + k);
                int left = max(1, pos - k);
                int right = min(n, pos + k);

                for (int j = left; j <= right; j++) {
                    covered[j] = 1;
                }
            }
        }

        printf("%d\n", additional_lights);
    }
    return 0;
}
