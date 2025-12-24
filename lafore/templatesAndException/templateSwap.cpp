#include <iostream>
using namespace std;

template <class T>
void swaps(T &a, T &b)
{
    T t = a;
    a = b;
    b = t;
}

int main()
{
    int a = 5, b = 10;
    swaps(a, b);
    cout << a << " " << b << endl;

    char c = 'x', d = 'y';
    swaps(c, d);
    cout << c << " " << d;
    return 0;
}
