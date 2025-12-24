#include <iostream>
using namespace std;

class publication
{
protected:
    string title;
    float price;

public:
    void getdata() { cin >> title >> price; }
    void putdata() { cout << title << " " << price << " "; }
};

class sales
{
protected:
    float s[3];

public:
    void getdata() { cin >> s[0] >> s[1] >> s[2]; }
    void putdata() { cout << s[0] << " " << s[1] << " " << s[2] << " "; }
};

class book : public publication, public sales
{
    int pages;

public:
    void getdata()
    {
        publication::getdata();
        sales::getdata();
        cin >> pages;
    }
    void putdata()
    {
        publication::putdata();
        sales::putdata();
        cout << pages << endl;
    }
};

class tape : public publication, public sales
{
    float minutes;

public:
    void getdata()
    {
        publication::getdata();
        sales::getdata();
        cin >> minutes;
    }
    void putdata()
    {
        publication::putdata();
        sales::putdata();
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
