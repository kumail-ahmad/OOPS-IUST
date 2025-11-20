#include <iostream>
using namespace std;

class Item {
    double *price;
    int *quantity;
public:
    Item(double p, int q) {
        price = new double(p);
        quantity = new int(q);
    }
    void show() {
        cout << (*price) * (*quantity);
    }
    ~Item() {
        delete price;
        delete quantity;
    }
};

int main() {
    Item i(50, 4);
    i.show();
    return 0;
}
