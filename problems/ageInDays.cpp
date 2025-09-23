#include <iostream>
using namespace std;

int main()
{
    int currentDay, currentYear, currentMonth;
    int birthYear, birthmonth, birthDay;
    cout << "Enter birth year ,month,day: ";
    cin >> birthYear >> birthmonth >> birthDay;
    cout << "Enter current year: ";
    cin >> currentYear >> currentMonth >> currentDay;

    int ageDays = (currentYear - birthYear) * 365 + (currentMonth - birthmonth) * 30 + currentDay - birthDay;
    cout << "You are approximately " << ageDays << " days old.\n";
    return 0;
}
