#include <stdio.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { 
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b; 
}
int modulus(int a, int b) { 
    if (b == 0) {
        printf("Error: Modulus by zero!\n");
        return 0;
    }
    return a % b; 
}

int main() {
    int num1, num2;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter operation (+, -, *, /, %%): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("Result: %d\n", add(num1, num2));
            break;
        case '-':
            printf("Result: %d\n", subtract(num1, num2));
            break;
        case '*':
            printf("Result: %d\n", multiply(num1, num2));
            break;
        case '/':
            printf("Result: %d\n", divide(num1, num2));
            break;
        case '%':
            printf("Result: %d\n", modulus(num1, num2));
            break;
        default:
            printf("Invalid operation!\n");
    }

    return 0;
}
