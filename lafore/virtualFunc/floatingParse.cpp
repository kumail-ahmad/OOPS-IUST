#include <iostream>
using namespace std;

class Token
{
public:
    virtual float value() = 0;
};

class Number : public Token
{
    float n;

public:
    Number(float x) : n(x) {}
    float value() { return n; }
};

int main()
{
    Token *t1 = new Number(3.14);
    Token *t2 = new Number(2.0);

    cout << t1->value() + t2->value();
    return 0;
}
