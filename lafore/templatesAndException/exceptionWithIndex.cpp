#include <iostream>
using namespace std;

class RangeError
{
public:
    int index;
    RangeError(int i) : index(i) {}
};

class safearay
{
    int arr[5];

public:
    int &operator[](int i)
    {
        if (i < 0 || i >= 5)
            throw RangeError(i);
        return arr[i];
    }
};

int main()
{
    safearay a;
    try
    {
        a[9] = 3;
    }
    catch (RangeError e)
    {
        cout << e.index;
    }
    return 0;
}
