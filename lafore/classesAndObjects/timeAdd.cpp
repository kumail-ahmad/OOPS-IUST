#include <iostream>
using namespace std;

class Time
{
    int h, m, s;

public:
    Time() : h(0), m(0), s(0) {}
    Time(int a, int b, int c) : h(a), m(b), s(c) {}

    Time add(Time t)
    {
        int total = h * 3600 + m * 60 + s + t.h * 3600 + t.m * 60 + t.s;
        return Time(total / 3600, (total % 3600) / 60, total % 60);
    }

    void show()
    {
        cout << h << ":" << m << ":" << s << endl;
    }
};

int main()
{
    Time t1(1, 20, 30), t2(2, 40, 50), t3;
    t3 = t1.add(t2);
    t3.show();
    return 0;
}
