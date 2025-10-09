#include <iostream>
using namespace std;

int main() {
    string s;
    int shift, key;
    getline(cin, s);
    cin >> shift >> key;

    for (char c : s)
        cout << (int)c << " ";
    cout << endl;

    for (char &c : s)
        if (c >= 32 && c <= 126)
            c = char((c - 32 + shift) % 95 + 32);

    for (char c : s)
        cout << (int)c << " ";
    cout << endl;

    for (char &c : s)
        c = c ^ key;

    for (char c : s)
        cout << (int)c << " ";
    cout << endl;

    cout << s << endl;
    return 0;
}
