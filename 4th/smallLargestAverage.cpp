#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double x, sum = 0, minv, maxv;
    cin >> x;
    minv = maxv = x;
    sum = x;

    for(int i = 1; i < n; i++) {
        cin >> x;
        sum += x;
        if(x < minv) minv = x;
        if(x > maxv) maxv = x;
    }

    cout << minv << " " << maxv << " " << sum / n;
    return 0;
}
