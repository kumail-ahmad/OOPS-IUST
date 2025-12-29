#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int roll;

public:
    void get()
    {
        cin >> name >> roll;
    }
};

class Marks : public Student
{
    int m1, m2, m3;

public:
    void read()
    {
        get();
        cin >> m1 >> m2 >> m3;
    }
    void show()
    {
        int total = m1 + m2 + m3;
        float percent = total / 3.0;
        cout << name << " " << roll << " " << total << " " << percent;
    }
};

int main()
{
    Marks m;
    m.read();
    m.show();
    return 0;
}
