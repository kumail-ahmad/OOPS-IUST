#include <iostream>
using namespace std;

class DistError
{
public:
    string msg;
    DistError(string m) : msg(m) {}
};

class Distance
{
    int feet;
    float inches;

public:
    Distance(int f, float i)
    {
        if (i < 0 || i >= 12)
            throw DistError("Inches error");
        feet = f;
        inches = i;
    }
    void show() { cout << feet << " " << inches; }
};

int main()
{
    try
    {
        Distance d(5, 15);
        d.show();
    }
    catch (DistError e)
    {
        cout << e.msg;
    }
    return 0;
}
