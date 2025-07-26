#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit;

    printf("Enter a 3-digit positive integer: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Invalid input. Please enter a 3-digit number.\n");
        return 1;
    }

    lastDigit = num % 10;
    firstDigit = num / 100;

    printf("Sum of first and last digit = %d\n", firstDigit + lastDigit);
    return 0;
}
