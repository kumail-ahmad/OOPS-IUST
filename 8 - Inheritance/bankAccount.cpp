#include <iostream>
using namespace std;

class Account
{
protected:
    float balance;

public:
    Account() : balance(0) {}
};

class SavingsAccount : public Account
{
public:
    void deposit(float x)
    {
        balance += x;
    }
    void withdraw(float x)
    {
        if (x <= balance)
            balance -= x;
    }
    void show()
    {
        cout << balance;
    }
};

int main()
{
    SavingsAccount s;
    s.deposit(5000);
    s.withdraw(1500);
    s.show();
    return 0;
}
    