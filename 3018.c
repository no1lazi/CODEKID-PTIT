// Một số được coi là đẹp nếu nó là số nguyên tố và tổng chữ số là một số trong dãy Fibonaci. Viết chương trình liệt kê trong một đoạn giữa hai số nguyên cho trước có bao nhiêu số đẹp như vậy
#include <stdio.h>

int is_prime(int x) {
    if (x < 2) return 0;
    if (x == 2 || x == 3) return 1;
    if (x % 2 == 0 || x % 3 == 0) return 0;
    for (int i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return 0;
    }
    return 1;
}

int is_fib_sum(int x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return (s == 1 || s == 2 || s == 3 || s == 5 || s == 8 || s == 13 || s == 21);
}

int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) return 0;


    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; ++i) {
        if (is_fib_sum(i) && is_prime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
