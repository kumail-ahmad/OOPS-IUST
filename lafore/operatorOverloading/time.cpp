#include <iostream>
using namespace std;

class time
{
    int h, m, s;

public:
    time(int a = 0, int b = 0, int c = 0) : h(a), m(b), s(c) {}
    time operator+(time t)
    {
        int x = h * 3600 + m * 60 + s + t.h * 3600 + t.m * 60 + t.s;
        return time(x / 3600, (x % 3600) / 60, x % 60);
    }
    void show() { cout << h << ":" << m << ":" << s << endl; }
};

int main()
{
    time t1(1, 30, 40), t2(2, 20, 30);
    (t1 + t2).show();
}
