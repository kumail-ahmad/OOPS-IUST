#include <iostream>
using namespace std;

class Interest {
    double principal, rate, time;
public:
    Interest(double p, double r, double t) {
        principal = p;
        rate = r;
        time = t;
    }
    void show() {
        cout << (principal * rate * time) / 100;
    }
};

int main() {
    double p, r, t;
    cin >> p >> r >> t;
    Interest obj(p, r, t);
    obj.show();
    return 0;
}
