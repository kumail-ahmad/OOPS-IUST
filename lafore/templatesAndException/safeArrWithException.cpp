#include <iostream>
using namespace std;

class RangeError
{
};

class safearay
{
    int arr[5];

public:
    int &operator[](int i)
    {
        if (i < 0 || i >= 5)
            throw RangeError();
        return arr[i];
    }
};

int main()
{
    safearay a;
    try
    {
        a[7] = 10;
    }
    catch (RangeError)
    {
        cout << "Out of bounds";
    }
    return 0;
}
