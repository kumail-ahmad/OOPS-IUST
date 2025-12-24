#include <iostream>
using namespace std;

class Distance
{
    int ft;
    float in;

public:
    Distance(int f = 0, float i = 0) : ft(f), in(i) {}
    Distance operator-(Distance d)
    {
        int a = ft * 12 + in, b = d.ft * 12 + d.in, c = a - b;
        return Distance(c / 12, c % 12);
    }
    void show() { cout << ft << " " << in << endl; }
};

int main()
{
    Distance d1(5, 6), d2(2, 8);
    (d1 - d2).show();
}
