#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int val;
    int id; // Chỉ số xuất hiện ban đầu trong mảng
} Element;

static Element a[100005];

// Hàm so sánh: Ưu tiên giá trị tăng dần, nếu bằng nhau thì theo vị trí ban đầu
int cmp(const void *x, const void *y) {
    const Element *ea = (const Element*)x;
    const Element *eb = (const Element*)y;
    if (ea->val != eb->val) {
        return (ea->val < eb->val) ? -1 : 1; // Tránh tràn số 32-bit khi trừ
    }
    return ea->id - eb->id;
}

void solve() {
    int n;
    if (scanf("%d", &n) != 1) return;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i].val);
        a[i].id = i;
    }

    qsort(a, n, sizeof(Element), cmp);

    int min_first_id = n + 1;
    int ans_val = -1;

    // Duyệt tìm các phần tử xuất hiện > 1 lần
    for (int i = 0; i < n - 1; i++) {
        if (a[i].val == a[i + 1].val) {

            if (a[i].id < min_first_id) {
                min_first_id = a[i].id;
                ans_val = a[i].val;
            }
            while (i < n - 1 && a[i].val == a[i + 1].val) {
                i++;
            }
        }
    }

    if (min_first_id <= n) {
        printf("%d\n", ans_val);
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
