#include <iostream>
using namespace std;

class employee
{
    int id;
    float salary;

public:
    void get() { cin >> id >> salary; }
    void show() { cout << id << " " << salary << endl; }
};

int main()
{
    employee e[3];
    for (int i = 0; i < 3; i++)
        e[i].get();
    for (int i = 0; i < 3; i++)
        e[i].show();
    return 0;
}
