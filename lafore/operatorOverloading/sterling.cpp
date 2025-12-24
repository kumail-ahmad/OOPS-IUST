#include <iostream>
using namespace std;

class sterling
{
    long p;
    int s, pe;

public:
    sterling(long a = 0, int b = 0, int c = 0) : p(a), s(b), pe(c) {}
    operator double() { return p + s / 20.0 + pe / 240.0; }
    sterling operator+(sterling x) { return sterling(double(*this) + double(x)); }
    void show() { cout << "£" << p << "." << s << "." << pe << endl; }
};

int main()
{
    sterling a(1, 10, 6), b(2, 5, 3);
    (a + b).show();
}
