#include <iostream>
using namespace std;

template <class T>
class frac
{
    T n, d;

public:
    frac(T a = 0, T b = 1)
    {
        n = a;
        d = b;
    }
    frac operator+(frac f) { return frac(n * f.d + d * f.n, d * f.d); }
    frac operator-(frac f) { return frac(n * f.d - d * f.n, d * f.d); }
    frac operator*(frac f) { return frac(n * f.n, d * f.d); }
    frac operator/(frac f) { return frac(n * f.d, d * f.n); }
    void show() { cout << (int)n << "/" << (int)d << endl; }
};

int main()
{
    frac<char> f1(1, 2), f2(1, 4);
    (f1 + f2).show();
    (f1 - f2).show();
    (f1 * f2).show();
    (f1 / f2).show();
    return 0;
}
