#include <iostream>
using namespace std;

class safearray
{
    int a[100];

public:
    int &operator[](int i)
    {
        if (i < 0 || i >= 100)
            exit(1);
        return a[i];
    }
};

int main()
{
    safearray s;
    s[10] = 50;
    cout << s[10];
}
