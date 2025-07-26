#include <stdio.h>

int main() {
    int a[5], b[5], sum[5];
    int *p = a, *q = b, *r = sum;

    printf("Enter 5 elements for first array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &p[i]);
    }

    printf("Enter 5 elements for second array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &q[i]);
    }

    for (int i = 0; i < 5; i++) {
        *(r + i) = *(p + i) + *(q + i);
    }

    printf("Sum of arrays:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", r[i]);
    }

    return 0;
}
