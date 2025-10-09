#include <iostream>
#include <climits>
using namespace std;

int main() {
    int intA, intB;
    cin >> intA >> intB;

    long long intSum = (long long)intA + intB;
    if(intSum > INT_MAX || intSum < INT_MIN)
        cout << "int overflow" << endl;
    else
        cout << intSum << endl;

    float floatA, floatB;
    cin >> floatA >> floatB;

    float floatResult = floatA * floatB;
    if(floatResult > 3.4e38f || floatResult < -3.4e38f)
        cout << "float overflow" << endl;
    else
        cout << floatResult << endl;

    double doubleA, doubleB;
    cin >> doubleA >> doubleB;

    if(doubleB == 0)
        cout << "division error" << endl;
    else
        cout << doubleA / doubleB << endl;

    return 0;
}
