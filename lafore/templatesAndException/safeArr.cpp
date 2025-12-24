#include <iostream>
using namespace std;

template <class T>
class safearay
{
    T arr[10];

public:
    T &operator[](int i)
    {
        if (i < 0 || i >= 10)
            throw "Index Error";
        return arr[i];
    }
};

int main()
{
    safearay<int> a;
    safearay<char> b;

    a[0] = 100;
    b[0] = 'Z';

    cout << a[0] << " " << b[0];
    return 0;
}
