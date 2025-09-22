#include <stdio.h>

int main() {
    int n, temp, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    if (rev == n) {
        printf("%d is a Palindrome\n", n);
    } else {
        printf("%d is Not a Palindrome\n", n);
    }

    int start, end, i, r, t;
    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Palindrome numbers in range: ");
    for (i = start; i <= end; i++) {
        t = i;
        r = 0;
        while (t > 0) {
            r = r * 10 + t % 10;
            t /= 10;
        }
        if (r == i) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
