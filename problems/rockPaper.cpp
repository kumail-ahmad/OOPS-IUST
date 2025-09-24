#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int user, comp;
    cout << "0 = Rock, 1 = Paper, 2 = Scissors\n";
    cout << "Enter your choice: ";
    cin >> user;

    comp = rand()%3;
    cout << "Computer chose: " << comp << endl;

    if (user == comp) cout << "It's a draw!\n";
    else if ((user == 0 && comp == 2) || (user == 1 && comp == 0) || (user == 2 && comp == 1))
        cout << "You win!\n";
    else
        cout << "Computer wins!\n";

    return 0;
}
