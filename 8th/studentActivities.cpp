#include <iostream>
using namespace std;

class Student
{
protected:
    string name;

public:
    void get()
    {
        cin >> name;
    }
};

class Sports : virtual public Student
{
protected:
    int s;

public:
    void getS()
    {
        cin >> s;
    }
};

class Academics : virtual public Student
{
protected:
    int a;

public:
    void getA()
    {
        cin >> a;
    }
};

class Result : public Sports, public Academics
{
public:
    void show()
    {
        cout << name << " " << (s + a);
    }
};

int main()
{
    Result r;
    r.get();
    r.getS();
    r.getA();
    r.show();
    return 0;
}
