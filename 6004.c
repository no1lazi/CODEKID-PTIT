#include <stdio.h>
#include <ctype.h>

int main() {
    int c;
    int letters = 0, digits = 0, others = 0;

    // Đọc từng ký tự cho đến khi gặp dấu xuống dòng hoặc hết file
    while ((c = getchar()) != EOF && c != '\n' && c != '\r') {
        if (isalpha(c)) {
            letters++;
        } else if (isdigit(c)) {
            digits++;
        } else {
            others++;
        }
    }

    printf("%d %d %d\n", letters, digits, others);
    return 0;
}
