#include <iostream>
using namespace std;

class sample
{
    static int count;
    int id;

public:
    sample() { id = ++count; }
    void show() { cout << id << endl; }
};
int sample::count = 0;

int main()
{
    sample a, b, c;
    a.show();
    b.show();
    c.show();
    return 0;
}
