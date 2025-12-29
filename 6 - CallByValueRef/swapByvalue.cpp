#include <iostream>
using namespace std;

void swapByValue(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    cout << "callByVal: " << x << " " << y << endl;
}

int main()
{
    int a = 3, b = 4;
    swapByValue(a, b);
    cout << "Main:" << a << " " << b;
    return 0;
}