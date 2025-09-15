#include <stdio.h>

int main() {
    int number, reversed;

    do {
        printf("Enter a positive integer (0 to exit): ");
        scanf("%d", &number);

        if (number == 0)
            break;

        if (number < 0) {
            printf("Please enter a positive number.\n");
            continue;
        }

        reversed = 0;
        int temp = number;
        while (temp > 0) {
            reversed = reversed * 10 + (temp % 10);
            temp /= 10;
        }

        printf("Reversed number: %d\n", reversed);

    } while (number != 0);

    printf("Program terminated.\n");
    return 0;
}
