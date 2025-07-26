#include <stdio.h>

int isDivisible(int n) {
    return (n % 3 == 0 && n % 5 == 0);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isDivisible(num))
        printf("%d is divisible by both 3 and 5.\n", num);
    else
        printf("%d is NOT divisible by both 3 and 5.\n", num);

    return 0;
}
