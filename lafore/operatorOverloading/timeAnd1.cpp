#include <iostream>
using namespace std;

class Time
{
    int h, m, s;

public:
    Time(int a = 0, int b = 0, int c = 0) : h(a), m(b), s(c) {}
    Time &operator++()
    {
        if (++s == 60)
        {
            s = 0;
            m++;
        }
        return *this;
    }
    Time operator++(int)
    {
        Time t = *this;
        ++(*this);
        return t;
    }
    Time &operator--()
    {
        if (--s < 0)
        {
            s = 59;
            m--;
        }
        return *this;
    }
    Time operator--(int)
    {
        Time t = *this;
        --(*this);
        return t;
    }
    void show() { cout << h << ":" << m << ":" << s << endl; }
};

int main()
{
    Time t(1, 59, 59);
    t++;
    t.show();
}
