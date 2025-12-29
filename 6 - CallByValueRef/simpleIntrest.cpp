#include <iostream>
using namespace std;

float simpleIntrest(float p, float r = 5.0, float t = 2.0)
{
    return (p * r * t) / 100;
}

int main()
{
    float first = simpleIntrest(1000, 9.0, 4.0);
    cout << first << endl;

    float second = simpleIntrest(1000, 9.0);
    cout << second << endl;

    float third = simpleIntrest(1000);
    cout << third << endl;
    return 0;
}