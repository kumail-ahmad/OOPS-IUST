#include <iostream>
using namespace std;

class Counter
{
protected:
    int c;

public:
    Counter() : c(0) {}
    void operator++() { ++c; }
    void operator--() { --c; }
    int get() { return c; }
};

class Counter2 : public Counter
{
public:
    void operator++(int) { c++; }
    void operator--(int) { c--; }
};

int main()
{
    Counter2 x;
    x++;
    x++;
    x--;
    cout << x.get();
    return 0;
}
