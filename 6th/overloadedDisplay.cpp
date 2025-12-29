#include <iostream>
#include <string>
using namespace std;

void display(int x)
{
    cout << x << endl;
}

void display(float x)
{
    cout << x << endl;
}

void display(string x)
{
    cout << x << endl;
}

int main()
{
    display(10);
    display(3.5f);
    display("Hello");
    return 0;
}
