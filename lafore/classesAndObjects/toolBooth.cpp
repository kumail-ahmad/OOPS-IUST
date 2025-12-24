#include <iostream>
using namespace std;

class tollBooth
{
    unsigned int cars;
    double cash;

public:
    tollBooth() : cars(0), cash(0) {}
    void payingCar()
    {
        cars++;
        cash += 0.5;
    }
    void nopayCar() { cars++; }
    void display()
    {
        cout << cars << " " << cash << endl;
    }
};

int main()
{
    tollBooth t;
    char ch;
    while (cin >> ch && ch != 'q')
    {
        if (ch == 'p')
            t.payingCar();
        if (ch == 'n')
            t.nopayCar();
    }
    t.display();
    return 0;
}
