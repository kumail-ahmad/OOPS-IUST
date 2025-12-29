#include <iostream>
using namespace std;

class Employee
{
protected:
    int id;
    float basic;

public:
    void get()
    {
        cin >> id >> basic;
    }
};

class Salary : public Employee
{
public:
    void show()
    {
        float hra = basic * 0.2;
        float da = basic * 0.1;
        float tax = basic * 0.05;
        float net = basic + hra + da - tax;
        cout << id << " " << net;
    }
};

int main()
{
    Salary s;
    s.get();
    s.show();
    return 0;
}
