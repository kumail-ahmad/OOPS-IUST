#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Factorial of a number\n");
        printf("2. GCD of two numbers\n");
        printf("3. LCM of two numbers\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            int num;
            printf("Enter number: ");
            scanf("%d", &num);
            printf("Factorial of %d is %d\n", num, factorial(num));
        } else if (choice == 2) {
            int a, b;
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));
        } else if (choice == 3) {
            int a, b;
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("LCM of %d and %d is %d\n", a, b, lcm(a, b));
        } else if (choice == 4) {
            printf("Exiting program.\n");
        } else {
            printf("Invalid choice. Try again.\n");
        }

    } while (choice != 4);

    return 0;
}
