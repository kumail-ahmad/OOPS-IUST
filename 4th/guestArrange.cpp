#include <iostream>
using namespace std;

int main() {
    int guests, chairs;
    cin >> guests >> chairs;
    long long ways = 1;

    for(int i = 0; i < chairs; i++)
        ways *= (guests - i);

    cout << ways;
    return 0;
}
