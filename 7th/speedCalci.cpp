#include <iostream>
using namespace std;

class Speed {
    double distance, time;
public:
    Speed(double d, double t) {
        distance = d;
        time = t;
    }
    void show() {
        cout << distance / time;
    }
};

int main() {
    double d, t;
    cin >> d >> t;
    Speed s(d, t);
    s.show();
    return 0;
}
