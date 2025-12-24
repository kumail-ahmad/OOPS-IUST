#include <iostream>
#include <cstdlib>
using namespace std;

class Int
{
    int x;
    void chk(long double v)
    {
        if (v > 2147483647 || v < -2147483648)
            exit(1);
    }

public:
    Int(int a = 0) : x(a) {}
    Int operator+(Int b)
    {
        chk((long double)x + b.x);
        return x + b.x;
    }
    Int operator-(Int b)
    {
        chk((long double)x - b.x);
        return x - b.x;
    }
    Int operator*(Int b)
    {
        chk((long double)x * b.x);
        return x * b.x;
    }
    Int operator/(Int b) { return x / b.x; }
    void show() { cout << x << endl; }
};

int main()
{
    Int a(2000000000), b(2);
    (a + b).show();
}
