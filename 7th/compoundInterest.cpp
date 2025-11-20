#include <iostream>
#include <cmath>
using namespace std;

class CompoundInterest {
    double principal, rate, time;
    int n;
public:
    CompoundInterest(double p, double r, double t, int x = 1) {
        principal = p;
        rate = r;
        time = t;
        n = x;
    }
    void show() {
        double amount = principal * pow(1 + rate / (100 * n), n * time);
        cout << amount;
    }
};

int main() {
    CompoundInterest c(1000, 10, 2);
    c.show();
    return 0;
}
