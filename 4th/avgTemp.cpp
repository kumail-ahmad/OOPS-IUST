#include <iostream>
using namespace std;

int main() {
    int t, count = 0;
    double sum = 0;

    while(cin >> t) {
        sum += t;
        count++;
    }

    cout << sum / count;
    return 0;
}
