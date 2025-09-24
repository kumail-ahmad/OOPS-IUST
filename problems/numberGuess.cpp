#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int num = rand() % 100 + 1;
    int guess, tries = 0;
    cout << "Guess a number between 1 and 100\n";
    do
    {
        cout << "Enter guess: ";
        cin >> guess;
        tries++;
        if (guess > num)
            cout << "Too high!\n";
        else if (guess < num)
            cout << "Too low!\n";
        else
            cout << "Correct! You guessed in " << tries << " tries.\n";
    } while (guess != num);

    return 0;
}
