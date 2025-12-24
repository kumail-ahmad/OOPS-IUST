#include <iostream>
using namespace std;

class Int
{
    int x;

public:
    Int() : x(0) {}
    Int(int a) : x(a) {}
    void show() { cout << x << endl; }
    Int add(Int a) { return Int(x + a.x); }
};

int main()
{
    Int a, b(10), c(20);
    a = b.add(c);
    a.show();
    return 0;
}
