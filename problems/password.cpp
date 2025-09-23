#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    int score = 0;

    cout << "Enter password: ";
    cin >> password;

    if(password.length() >= 8) score++;
    for(char c : password) {
        if(isdigit(c)) score++;
        else if(isupper(c)) score++;
        else if(ispunct(c)) score++;
    }

    cout << "Password Strength: ";
    if(score <= 1) cout << "Weak\n";
    else if(score == 2 || score == 3) cout << "Medium\n";
    else cout << "Strong\n";

    return 0;
}
