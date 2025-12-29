#include <iostream>
#define PI 3.14
using namespace std;

float area(float rad)
{
    return PI * rad * rad;
}
float area(int length, int breadth)
{
    return length * breadth;
}
float area(double base, double height)
{
    return 0.5 * base * height;
}

int main()
{
    cout << "Area of Circle : " << area(5) << endl;
    cout << "Area of Rectangle : " << area(10, 5) << endl;
    cout << "Area of Triangle : " << area(12, 3) << endl;
    return 0;
}