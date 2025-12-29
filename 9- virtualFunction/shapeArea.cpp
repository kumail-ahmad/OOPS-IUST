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

class Square : public Shape
{
    float s;

public:
    Square(float s) : s(s) {}
    float area() { return s * s; }
};

int main()
{
    Shape *s;
    Circle c(3);
    Rectangle r(4, 5);
    Square sq(4);

    s = &c;
    cout << s->area() << endl;
    s = &r;
    cout << s->area() << endl;
    s = &sq;
    cout << s->area() << endl;
    return 0;
}
