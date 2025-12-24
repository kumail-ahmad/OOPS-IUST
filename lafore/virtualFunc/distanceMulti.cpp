#include <iostream>
using namespace std;

class Distance
{
    float meters;

public:
    Distance(float m = 0) : meters(m) {}
    friend Distance operator*(float x, Distance d);
    void show() { cout << meters; }
};

Distance operator*(float x, Distance d)
{
    return Distance(x * d.meters);
}

int main()
{
    Distance d(5);
    Distance r = 7.5 * d;
    r.show();
    return 0;
}
