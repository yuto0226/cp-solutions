#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int r;
        scanf("%d", &r);
      
        int street[r];
        for (int i = 0; i < r; i++) {
            scanf("%d", &street[i]);
        }
        qsort(street, r, sizeof(int), cmp);
      
        int sum = 0;
        for (int i = 0; i < r; i++) {
            sum += abs(street[r/2] - street[i]);
        }
      
        printf("%d\n", sum);
    }
}
