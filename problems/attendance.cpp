#include <iostream>
using namespace std;

int main() {
    int attended, total;
    cout << "Enter classes attended and total classes held: ";
    cin >> attended >> total;

    double currentPercent = (attended * 100.0) / total;

    if (currentPercent >= 75)
        cout << "You already have enough attendance.\n";
    else {
        int x = 0;
        while (((attended + x) * 100.0) / (total + x) <75) x++;
        cout << "You need to attend next " << x << " classes to reach 75%.\n";
    }
    return 0;
}
