#include <iostream>
using namespace std;

class fraction
{
    int n, d;

public:
    fraction(int x = 0, int y = 1)
    {
        n = x;
        d = y;
    }

    void get()
    {
        char c;
        cin >> n >> c >> d;
    }

    void show()
    {
        cout << n << "/" << d << endl;
    }

    fraction add(fraction f)
    {
        return fraction(n * f.d + d * f.n, d * f.d);
    }
};

int main()
{
    fraction a, b, c;
    a.get();
    b.get();
    c = a.add(b);
    c.show();
    return 0;
}
