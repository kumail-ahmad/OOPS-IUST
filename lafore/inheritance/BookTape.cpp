#include <iostream>
using namespace std;

class publication
{
protected:
    string title;
    float price;

public:
    void getdata()
    {
        cin >> title >> price;
    }
    void putdata()
    {
        cout << title << " " << price << " ";
    }
};

class book : public publication
{
    int pages;

public:
    void getdata()
    {
        publication::getdata();
        cin >> pages;
    }
    void putdata()
    {
        publication::putdata();
        cout << pages << endl;
    }
};

class tape : public publication
{
    float minutes;

public:
    void getdata()
    {
        publication::getdata();
        cin >> minutes;
    }
    void putdata()
    {
        publication::putdata();
        cout << minutes << endl;
    }
};

int main()
{
    book b;
    tape t;
    b.getdata();
    t.getdata();
    b.putdata();
    t.putdata();
    return 0;
}
