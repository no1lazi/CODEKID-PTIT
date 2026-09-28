#include <stdio.h>
#include <string.h>
#include <ctype.h>

char w[1005][105], s[105];
int c[1005], n, i, j;

int main() {
    while (scanf("%s", s) == 1) {
        for (i = 0; s[i]; i++) s[i] = tolower(s[i]);
        for (j = 0; j < n; j++)
            if (!strcmp(w[j], s)) { c[j]++; break; }
        if (j == n) { strcpy(w[n], s); c[n++] = 1; }
    }
    for (i = 0; i < n; i++) printf("%s %d\n", w[i], c[i]);
    return 0;
}
