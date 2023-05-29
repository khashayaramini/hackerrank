#include <stdio.h>

void update(int *a,int *b) {
        // Complete this function
        int old_a = *a;
        int old_b = *b;
        *a = old_a + old_b;
        int diff = old_a - old_b;
        *b = diff > 0 ? diff : diff * -1;
}

int main() {
        int a, b;
        int *pa = &a, *pb = &b;

        scanf("%d %d", &a, &b);
        update(pa, pb);
        printf("%d\n%d", a, b);

        return 0;
}
