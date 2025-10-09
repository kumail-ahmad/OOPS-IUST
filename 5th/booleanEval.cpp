#include <iostream>
using namespace std;

bool readBool()
{
    string s;
    cin >> s;
    return (s == "1" || s == "true");
}

int main()
{
    bool a, b, c;

    a = readBool();
    b = readBool();
    c = readBool();

    cout << (a && b) << endl;
    cout << (a || b) << endl;
    cout << (!a) << endl;
    cout << (a ^ b ^ c) << endl;

    cout << "A B C AND OR XOR" << endl;
    for (int i = 0; i < 8; i++)
    {
        bool x = i & 4;
        bool y = i & 2;
        bool z = i & 1;
        cout << x << " " << y << " " << z << " "
             << (x && y && z) << " "
             << (x || y || z) << " "
             << (x ^ y ^ z) << endl;
    }

    return 0;
}
