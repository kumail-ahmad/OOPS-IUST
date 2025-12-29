#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float area() = 0;
};

class Circle : public Shape
{
    float r;

public:
    Circle(float r) : r(r) {}
    float area() { return 3.14 * r * r; }
};

class Rectangle : public Shape
{
    float l, b;

public:
    Rectangle(float l, float b) : l(l), b(b) {}
    float area() { return l * b; }
};

class Triangle : public Shape
{
    float b, h;

public:
    Triangle(float b, float h) : b(b), h(h) {}
    float area() { return 0.5 * b * h; }
};

int main()
{
    Shape *s;
    Circle c(3);
    Rectangle r(4, 5);
    Triangle t(6, 2);

    s = &c;
    cout << s->area() << endl;
    s = &r;
    cout << s->area() << endl;
    s = &t;
    cout << s->area();
    return 0;
}
