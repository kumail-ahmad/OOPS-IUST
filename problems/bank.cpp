#include <iostream>
using namespace std;
class bankAccount
{
    string name;
    double amount;

public:
    bankAccount(string n, double iniBalance)
    {
        name = n;
        amount = iniBalance;
    }
    void deposit(double balance)
    {
        amount += balance;
    }
    void withdrawl(double balance)
    {
        if (amount < balance)
        {
            cout << "Insufficient balance" << endl;
        }
        else
        {

            amount -= balance;
        }
    }
    void showBalance()
    {
        cout << "Your account has : Rs." << amount << endl;
    }
};

int main()
{
    bankAccount account1("Kumail", 1000);

    account1.deposit(5000);
    account1.showBalance();
    account1.withdrawl(30000);
    account1.showBalance();
    return 0;
}
