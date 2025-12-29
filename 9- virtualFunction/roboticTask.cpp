#include <iostream>
using namespace std;

class Robot
{
public:
    virtual void performTask() = 0;
};

class CleaningRobot : public Robot
{
public:
    void performTask() { cout << "Cleaning" << endl; }
};

class SecurityRobot : public Robot
{
public:
    void performTask() { cout << "Monitoring" << endl; }
};

class DeliveryRobot : public Robot
{
public:
    void performTask() { cout << "Delivering" << endl; }
};

int main()
{
    Robot *r[3];
    r[0] = new CleaningRobot();
    r[1] = new SecurityRobot();
    r[2] = new DeliveryRobot();

    for (int i = 0; i < 3; i++)
        r[i]->performTask();
    return 0;
}
