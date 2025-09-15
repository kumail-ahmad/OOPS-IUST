#include <stdio.h>


int isPrime(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n, i = 2;

    printf("Enter a number n: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are:\n", n);
    while (i <= n) {
        if (isPrime(i))
            printf("%d ", i);
        i++;
    }
    printf("\n");

    return 0;
}
