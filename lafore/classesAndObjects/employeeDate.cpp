#include <iostream>
using namespace std;

enum etype
{
    laborer,
    secretary,
    manager
};

class date
{
    int m, d, y;

public:
    void get()
    {
        char c;
        cin >> m >> c >> d >> c >> y;
    }
    void show() { cout << m << "/" << d << "/" << y; }
};

class employee
{
    int id;
    float salary;
    etype type;
    date doj;

public:
    void get()
    {
        char t;
        cin >> id >> salary >> t;
        type = (t == 'l') ? laborer : (t == 's') ? secretary
                                                 : manager;
        doj.get();
    }
    void show()
    {
        cout << id << " " << salary << " " << type << " ";
        doj.show();
        cout << endl;
    }
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
