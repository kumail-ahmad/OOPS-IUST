#include <iostream>
using namespace std;

class manager
{
protected:
    int id;

public:
    void get() { cin >> id; }
    void show() { cout << id << " "; }
};

class executive : public manager
{
    double bonus;
    int shares;

public:
    void get()
    {
        manager::get();
        cin >> bonus >> shares;
    }
    void show()
    {
        manager::show();
        cout << bonus << " " << shares << endl;
    }
};

int main()
{
    executive e;
    e.get();
    e.show();
    return 0;
}
