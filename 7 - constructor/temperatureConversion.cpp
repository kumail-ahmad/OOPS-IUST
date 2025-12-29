#include <iostream>
using namespace std;

class Temperature {
    double celsius;
public:
    Temperature(double c) {
        celsius = c;
    }
    void show() {
        cout << celsius << " ";
        cout << (celsius * 9 / 5 + 32);
    }
};

int main() {
    double c;
    cin >> c;
    Temperature t(c);
    t.show();
    return 0;
}
