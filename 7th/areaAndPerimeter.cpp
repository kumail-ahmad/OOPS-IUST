#include <iostream>
using namespace std;

class Rectangle {
    double length, width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    Rectangle(double l) {
        length = width = l;
    }
    void show() {
        cout << length * width << " ";
        cout << 2 * (length + width) << endl;
    }
};

int main() {
    Rectangle r1(10, 5);
    Rectangle r2(6);
    r1.show();
    r2.show();
    return 0;
}
