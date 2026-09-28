#include <stdio.h>

int count_words(const char *s) {
    int count = 0;
    int in_word = 0;

    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] != ' ' && s[i] != '\t' && s[i] != '\r' && s[i] != '\n') {
            if (!in_word) {
                count++;
                in_word = 1;
            }
        } else {
            in_word = 0;
        }
    }
    return count;
}

int main(void) {
    int t;
    if (scanf("%d", &t) == 1) {
        char s[305];
        while (t--) {
            if (scanf(" %[^\n]", s) == 1) {
                printf("%d\n", count_words(s));
            }
        }
    }
    return 0;
}
