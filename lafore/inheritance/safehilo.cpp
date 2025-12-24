#include <iostream>
using namespace std;

class safearay
{
protected:
    int arr[100];

public:
    int &operator[](int i) { return arr[i]; }
};

class safehilo : public safearay
{
    int low, high;

public:
    safehilo(int l, int h)
    {
        low = l;
        high = h;
    }
    int &operator[](int i)
    {
        return safearay::operator[](i - low);
    }
};

int main()
{
    safehilo a(10, 15);
    a[10] = 50;
    cout << a[10];
    return 0;
}
