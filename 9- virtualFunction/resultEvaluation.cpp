#include <iostream>
using namespace std;

class Student
{
public:
    virtual string calculateResult() = 0;
};

class Undergraduate : public Student
{
    int marks;

public:
    Undergraduate(int m) : marks(m) {}
    string calculateResult() { return marks >= 40 ? "Pass" : "Fail"; }
};

class Postgraduate : public Student
{
    int marks;

public:
    Postgraduate(int m) : marks(m) {}
    string calculateResult() { return marks >= 50 ? "Pass" : "Fail"; }
};

int main()
{
    Student *s;
    Undergraduate u(45);
    Postgraduate p(48);

    s = &u;
    cout << s->calculateResult() << endl;
    s = &p;
    cout << s->calculateResult() << endl;
    return 0;
}
