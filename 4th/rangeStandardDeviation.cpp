#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    double x, sum = 0, sumsq = 0, minv, maxv;
    cin >> x;
    minv = maxv = x;
    sum = x;
    sumsq = x * x;

    for(int i = 1; i < n; i++) {
        cin >> x;
        sum += x;
        sumsq += x * x;
        if(x < minv) minv = x;
        if(x > maxv) maxv = x;
    }

    double avg = sum / n;
    double sd = sqrt((sumsq / n) - (avg * avg));
    cout << maxv - minv << " " << sd;
    return 0;
}
