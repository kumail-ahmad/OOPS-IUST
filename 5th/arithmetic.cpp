
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1 = 5;
    float num2 = 2.0;
    double num3 = 3.2;

    double result = num1 + num2 * num3;
    cout << result;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    string op;
    double a, b;

    cout << "Enter first number: ";
    cin >> a; 

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    double result;

    if (op == "+")
        result = a + b;
    else if (op == "-")
        result = a - b;
    else if (op == "*")
        result = a * b;
    else if (op == "/")
    {
        if (b == 0)
        {
            cout << "Error: Division by zero.\n";
            return 1;
        }
        result = a / b;
    }
    else
    {
        cout << "Invalid operator.\n";
        return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}
