#include <iostream>
using namespace std;

class Teacher
{
protected:
    string subject;

public:
    void getT()
    {
        cin >> subject;
    }
};

class Researcher
{
protected:
    int papers;

public:
    void getR()
    {
        cin >> papers;
    }
};

class Faculty : public Teacher, public Researcher
{
public:
    void show()
    {
        cout << subject << " " << papers;
    }
};

int main()
{
    Faculty f;
    f.getT();
    f.getR();
    f.show();
    return 0;
}
