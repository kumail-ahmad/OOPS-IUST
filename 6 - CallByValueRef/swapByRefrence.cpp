#include <iostream>
using namespace std;

void swapByrefrence(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
    cout << "callByRefrence: " << x << " " << y << endl;
}

int main()
{
    int a = 3, b = 4;
    swapByrefrence(a, b);
    cout << "Main:" << a << " " << b;
    return 0;
}