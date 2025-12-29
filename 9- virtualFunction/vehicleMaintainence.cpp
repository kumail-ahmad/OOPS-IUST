#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual float maintenanceCost() = 0;
};

class Car : public Vehicle
{
public:
    float maintenanceCost() { return 5000; }
};

class Bike : public Vehicle
{
public:
    float maintenanceCost() { return 2000; }
};

class Truck : public Vehicle
{
public:
    float maintenanceCost() { return 10000; }
};

int main()
{
    Vehicle *v;
    Car c;
    Bike b;
    Truck t;

    v = &c;
    cout << v->maintenanceCost() << endl;
    v = &b;
    cout << v->maintenanceCost() << endl;
    v = &t;
    cout << v->maintenanceCost() << endl;
    return 0;
}
