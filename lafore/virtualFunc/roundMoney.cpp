#include <iostream>
#include <cmath>
using namespace std;

class bMoney
{
    long double money;

public:
    bMoney(long double m = 0) : money(m) {}
    friend bMoney round(bMoney);
    void show() { cout << money; }
};

bMoney round(bMoney b)
{
    long double i;
    long double f = modfl(b.money, &i);
    if (f >= 0.5)
        i++;
    return bMoney(i);
}

int main()
{
    bMoney b(12.6);
    bMoney r = round(b);
    r.show();
    return 0;
}
