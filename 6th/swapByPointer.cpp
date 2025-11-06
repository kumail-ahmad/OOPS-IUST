#include <iostream>
using namespace std;

void swapByPointer(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    cout << "callByPointer: " << *x << " " << *y << endl;
}

int main()
{
    int a = 3, b = 4;
    swapByPointer(&a, &b);
    cout << "Main:" << a << " " << b;
    return 0;
}