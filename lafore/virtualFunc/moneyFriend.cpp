#include <iostream>
using namespace std;

class bMoney
{
    long double money;

public:
    bMoney(long double m = 0) : money(m) {}
    friend bMoney operator*(long double, bMoney);
    friend long double operator/(long double, bMoney);
    void show() { cout << money; }
};

bMoney operator*(long double x, bMoney b)
{
    return bMoney(x * b.money);
}

long double operator/(long double x, bMoney b)
{
    return x / b.money;
}

int main()
{
    bMoney b(50);
    bMoney r = 2 * b;
    cout << (100 / b) << endl;
    r.show();
    return 0;
}
