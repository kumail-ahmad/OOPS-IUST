#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    void getName()
    {
        cin >> name;
    }
};

class Student : public Person
{
protected:
    int roll;

public:
    void getRoll()
    {
        cin >> roll;
    }
};

class Result : public Student
{
    int m1, m2, m3;

public:
    void read()
    {
        getName();
        getRoll();
        cin >> m1 >> m2 >> m3;
    }
    void show()
    {
        int total = m1 + m2 + m3;
        cout << name << " " << roll << " " << total;
    }
};

int main()
{
    Result r;
    r.read();
    r.show();
    return 0;
}
