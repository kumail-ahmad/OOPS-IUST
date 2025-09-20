#include <stdio.h>

int main()
{
    int a, b, result;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    result = (op == '+') ? a + b : (op == '-')         ? a - b
                            : (op == '*')           ? a * b
                            : (op == '/' && b != 0) ? a / b
                            : (op == '%' && b != 0) ? a % b
                                                    : 0;

    if ((op == '/' || op == '%') && b == 0)
        printf("Error: Division by zero\n");
    else if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
        printf("Invalid operator\n");
    else
        printf("result: %d\n", result);

    return 0;
}
