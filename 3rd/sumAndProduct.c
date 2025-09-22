#include <stdio.h>

int main() {
    int n, sum = 0, product = 1, temp, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        product *= digit;
        temp /= 10;
    }

    printf("Sum of digits: %d\n", sum);
    printf("Product of digits: %d\n", product);

    return 0;
}
