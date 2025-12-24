#include <iostream>
using namespace std;

class Token
{
public:
    virtual float getNumber() = 0;
    virtual char getOperator() = 0;
    virtual ~Token() {}
};

class Number : public Token
{
    float n;

public:
    Number(float x) : n(x) {}
    float getNumber() { return n; }
    char getOperator() { return 0; }
};

class Operator : public Token
{
    char op;

public:
    Operator(char c) : op(c) {}
    float getNumber() { return 0; }
    char getOperator() { return op; }
};

int main()
{
    Token *stack[10];
    int top = 0;

    stack[top++] = new Number(3.5);
    stack[top++] = new Operator('+');

    cout << stack[0]->getNumber() << endl;
    cout << stack[1]->getOperator() << endl;
    return 0;
}
