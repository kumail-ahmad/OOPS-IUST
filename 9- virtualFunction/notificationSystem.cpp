#include <iostream>
using namespace std;

class Notification
{
public:
    virtual void send() = 0;
};

class EmailNotification : public Notification
{
public:
    void send() { cout << "Email Sent" << endl; }
};

class SMSNotification : public Notification
{
public:
    void send() { cout << "SMS Sent" << endl; }
};

class AppNotification : public Notification
{
public:
    void send() { cout << "App Notification Sent" << endl; }
};

int main()
{
    Notification *n;
    EmailNotification e;
    SMSNotification s;
    AppNotification a;

    n = &e;
    n->send();
    n = &s;
    n->send();
    n = &a;
    n->send();
    return 0;
}
