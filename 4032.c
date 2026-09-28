#include <stdio.h>
#include <stdlib.h>

#define HASH_SIZE 130003

typedef struct {
    int val;
    int cnt;
    int pos;
} Item;

static Item items[50000];
static int num_items = 0;
static int hash_table[HASH_SIZE];

int is_non_decreasing(int n) {
    int last = 10;
    while (n > 0) {
        int d = n % 10;
        if (d > last) return 0;
        last = d;
        n /= 10;
    }
    return 1;
}

void add_item(int x) {
    int h = (x % HASH_SIZE + HASH_SIZE) % HASH_SIZE;
    while (hash_table[h] != 0) {
        int idx = hash_table[h] - 1;
        if (items[idx].val == x) {
            items[idx].cnt++;
            return;
        }
        h = (h + 1) % HASH_SIZE;
    }
    items[num_items].val = x;
    items[num_items].cnt = 1;
    items[num_items].pos = num_items;
    hash_table[h] = num_items + 1;
    num_items++;
}

int cmp(const void *a, const void *b) {
    const Item *ia = (const Item*)a;
    const Item *ib = (const Item*)b;
    if (ia->cnt != ib->cnt) {
        return ib->cnt - ia->cnt;
    }
    return ia->pos - ib->pos;
}

int main() {
    int x;
    while (scanf("%d", &x) == 1) {
        if (is_non_decreasing(x)) {
            add_item(x);
        }
    }

    qsort(items, num_items, sizeof(Item), cmp);

    for (int i = 0; i < num_items; i++) {
        printf("%d %d\n", items[i].val, items[i].cnt);
    }

    return 0;
}
