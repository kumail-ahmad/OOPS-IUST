#include <iostream>
using namespace std;

int main()
{
    int noOfEmployees, employeeID;
    double hourlyWage, totalHours, grossPay, netPay, tax, totalPayRoll = 0.0;

    cout << "Enter Number of Employees: ";
    cin >> noOfEmployees;

    for (int i = 0; i < noOfEmployees; i++)
    {
        cout << "\nEnter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Hourly Wage Rate: ";
        cin >> hourlyWage;

        cout << "Enter Total Hours Worked in a Week: ";
        cin >> totalHours;

        if (totalHours <= 40)
        {
            grossPay = totalHours * hourlyWage;
        }
        else
        {
            double regularPay = 40 * hourlyWage;
            double overtimeHours = totalHours - 40;
            double overtimeBonus = overtimeHours * hourlyWage * 1.5;
            grossPay = regularPay + overtimeBonus;
        }

        tax = grossPay * 0.03625;
        netPay = grossPay - tax;

        cout << "Employee ID: " << employeeID << " | Net Pay: Rs." << netPay << endl;

        totalPayRoll += netPay;
    }

    double averagePay = (noOfEmployees > 0) ? totalPayRoll / noOfEmployees : 0.0;
    cout << "\nTotal Payroll: Rs." << totalPayRoll << endl;
    cout << "Average Net Pay: Rs." << averagePay << endl;

    return 0;
}
