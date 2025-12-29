#include <iostream>
using namespace std;

class Employee
{
public:
    virtual double calculateSalary() = 0;
};

class FullTimeEmployee : public Employee
{
    double basic;

public:
    FullTimeEmployee(double b) : basic(b) {}
    double calculateSalary() { return basic + 0.2 * basic; }
};

class PartTimeEmployee : public Employee
{
    int h;
    double rate;

public:
    PartTimeEmployee(int h, double r) : h(h), rate(r) {}
    double calculateSalary() { return h * rate; }
};

class Intern : public Employee
{
    double stipend;

public:
    Intern(double s) : stipend(s) {}
    double calculateSalary() { return stipend; }
};

int main()
{
    Employee *e[3];
    e[0] = new FullTimeEmployee(30000);
    e[1] = new PartTimeEmployee(40, 500);
    e[2] = new Intern(8000);

    for (int i = 0; i < 3; i++)
        cout << e[i]->calculateSalary() << endl;
    return 0;
}
