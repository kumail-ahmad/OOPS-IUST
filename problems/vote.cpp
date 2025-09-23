#include <iostream>
using namespace std;

int main() {
    int votes[3] = {0, 0, 0};
    int n, choice;

    cout << "Enter number of voters: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Vote for candidate (1/2/3): ";
        cin >> choice;
        if (choice >= 1 && choice <= 3) {
            votes[choice - 1]++;
        } else {
            cout << "Invalid vote!\n";
        }
    }

    cout << "\nResults:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Candidate " << i + 1 << ": " << votes[i] << " votes\n";
    }

    if (votes[0] > votes[1] && votes[0] > votes[2])
        cout << "Winner: Candidate 1\n";
    else if (votes[1] > votes[0] && votes[1] > votes[2])
        cout << "Winner: Candidate 2\n";
    else if (votes[2] > votes[0] && votes[2] > votes[1])
        cout << "Winner: Candidate 3\n";
    else
        cout << "It's a tie!\n";

    return 0;
}
