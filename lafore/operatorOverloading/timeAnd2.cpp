#include <iostream>
using namespace std;

class Time
{
    int h, m, s;

public:
    Time(int a = 0, int b = 0, int c = 0) : h(a), m(b), s(c) {}
    Time operator-(Time t)
    {
        int x = h * 3600 + m * 60 + s - (t.h * 3600 + t.m * 60 + t.s);
        return Time(x / 3600, (x % 3600) / 60, x % 60);
    }
    Time operator*(float k)
    {
        int x = (h * 3600 + m * 60 + s) * k;
        return Time(x / 3600, (x % 3600) / 60, x % 60);
    }
    void show() { cout << h << ":" << m << ":" << s << endl; }
};

int main()
{
    Time t1(2, 0, 0), t2(1, 0, 0);
    (t1 - t2).show();
    (t1 * 2.5).show();
}
