#include <iostream>
using namespace std;

int sum(int x, int y, int z)
{
    return x + y + z;
}
int sum(int x, int y)
{
    return x + y;
}
string sum(string x, string y)
{
    return x + y;
}

int main()
{
    cout << "Sum of 3 integers : " << sum(1, 2, 3) << endl;
    cout << "Sum of 2 integers : " << sum(1, 2) << endl;
    cout << "Sum of 2 chars: " << sum("Hello ", "world") << endl;

    return 0;
}