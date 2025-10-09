#include <iostream>
using namespace std;

int main() {
    float celsiusFloat;
    double celsiusDouble;
    cin >> celsiusFloat >> celsiusDouble;

    float fahrenheitFloat = celsiusFloat * 9 / 5 + 32;
    float kelvinFloat = celsiusFloat + 273.15f;

    double fahrenheitDouble = celsiusDouble * 9 / 5 + 32;
    double kelvinDouble = celsiusDouble + 273.15;

    cout << fahrenheitFloat << " " << kelvinFloat << endl;
    cout << fahrenheitDouble << " " << kelvinDouble << endl;

    float largeFloat = 1e20f;
    double largeDouble = 1e20;

    cout << largeFloat + 1 << endl;
    cout << largeDouble + 1 << endl;

    return 0;
}
