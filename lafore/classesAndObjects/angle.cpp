#include <iostream>
using namespace std;

class angle
{
    int deg;
    float min;
    char dir;

public:
    void get() { cin >> deg >> min >> dir; }
    void show() { cout << deg << " " << min << " " << dir << endl; }
};

int main()
{
    angle a;
    a.get();
    a.show();
    return 0;
}
