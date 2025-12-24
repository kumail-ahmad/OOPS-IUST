#include <iostream>
using namespace std;

enum period
{
    hourly,
    weekly,
    monthly
};

class employee
{
protected:
    int id;

public:
    void get() { cin >> id; }
    void show() { cout << id << " "; }
};

class employee2 : public employee
{
    double compensation;
    period p;

public:
    void get()
    {
        employee::get();
        char c;
        cin >> compensation >> c;
        p = (c == 'h') ? hourly : (c == 'w') ? weekly
                                             : monthly;
    }
    void show()
    {
        employee::show();
        cout << compensation << " " << p << endl;
    }
};

int main()
{
    employee2 e;
    e.get();
    e.show();
    return 0;
}
