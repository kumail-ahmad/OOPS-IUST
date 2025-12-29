#include <iostream>
using namespace std;

class Bill {
    int units;
public:
    Bill(int u) {
        units = u;
    }
    Bill(const Bill& b) {
        units = b.units;
    }
    void show() {
        cout << units * 5 << endl;
    }
};

int main() {
    Bill b1(100);
    Bill b2 = b1;
    b1.show();
    b2.show();
    return 0;
}
