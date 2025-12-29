#include <iostream>
using namespace std;

class BankAccount
{
public:
    virtual double interest() = 0;
};

class SavingsAccount : public BankAccount
{
    double p;

public:
    SavingsAccount(double p) : p(p) {}
    double interest() { return p * 0.04; }
};

class FixedDeposit : public BankAccount
{
    double p;

public:
    FixedDeposit(double p) : p(p) {}
    double interest() { return p * 0.07; }
};

class RecurringDeposit : public BankAccount
{
    double p;

public:
    RecurringDeposit(double p) : p(p) {}
    double interest() { return p * 0.06; }
};

int main()
{
    BankAccount *b;
    SavingsAccount s(10000);
    FixedDeposit f(10000);
    RecurringDeposit r(10000);

    b = &s;
    cout << b->interest() << endl;
    b = &f;
    cout << b->interest() << endl;
    b = &r;
    cout << b->interest() << endl;
    return 0;
}
