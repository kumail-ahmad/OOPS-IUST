#include <iostream>
#include <cmath>
using namespace std;

class Polar
{
    double r, a;

public:
    Polar(double x = 0, double y = 0) : r(x), a(y) {}
    Polar operator+(Polar p)
    {
        double x = r * cos(a) + p.r * cos(p.a);
        double y = r * sin(a) + p.r * sin(p.a);
        return Polar(sqrt(x * x + y * y), atan2(y, x));
    }
    void show() { cout << r << " " << a << endl; }
};

int main()
{
    Polar p1(5, 0.5), p2(3, 1);
    (p1 + p2).show();
}
