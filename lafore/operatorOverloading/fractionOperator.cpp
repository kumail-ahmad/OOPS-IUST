#include <iostream>
using namespace std;

class frac
{
    long n, d;

public:
    frac(long a = 0, long b = 1) : n(a), d(b) {}
    frac operator+(frac f) { return frac(n * f.d + d * f.n, d * f.d); }
    frac operator-(frac f) { return frac(n * f.d - d * f.n, d * f.d); }
    frac operator*(frac f) { return frac(n * f.n, d * f.d); }
    frac operator/(frac f) { return frac(n * f.d, d * f.n); }
    void show() { cout << n << "/" << d << endl; }
};

int main()
{
    frac a(1, 2), b(1, 4);
    (a + b).show();
}
