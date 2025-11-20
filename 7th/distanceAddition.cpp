#include <iostream>
using namespace std;

class Distance {
    int meters, centimeters;
public:
    Distance(int m) {
        meters = m;
        centimeters = 0;
    }
    Distance(int m, int c) {
        meters = m;
        centimeters = c;
    }
    Distance add(Distance d) {
        int totalCm = centimeters + d.centimeters;
        int totalM = meters + d.meters + totalCm / 100;
        totalCm %= 100;
        return Distance(totalM, totalCm);
    }
    void show() {
        cout << meters << " " << centimeters;
    }
};

int main() {
    Distance d1(3, 80);
    Distance d2(2, 50);
    Distance d3 = d1.add(d2);
    d3.show();
    return 0;
}
