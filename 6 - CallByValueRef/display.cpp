#include <iostream>
using namespace std;

int display(int value)
{
    cout << value << endl;
}
int display(float value)
{
    cout << value << endl;
}
int display(string value)
{
    cout << value << endl;
}

int main()
{

    display(2);
    display(3.13f);
    display("sa");
    return 0;
}