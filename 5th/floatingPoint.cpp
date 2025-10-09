#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float af = 1.0f, bf = 10.0f, cf = 3.0f;
    double ad = 1.0, bd = 10.0, cd = 3.0;

    cout << fixed << setprecision(10);

    cout << (af * bf) / cf << endl;
    cout << (af / cf) * bf << endl;

    cout << (ad * bd) / cd << endl;
    cout << (ad / cd) * bd << endl;

    float feps = 1.0f;
    while (1.0f + feps != 1.0f)
        feps /= 2.0f;
    feps *= 2.0f;

    double deps = 1.0;
    while (1.0 + deps != 1.0)
        deps /= 2.0;
    deps *= 2.0;

    cout << feps << endl;
    cout << deps << endl;

    return 0;
}
