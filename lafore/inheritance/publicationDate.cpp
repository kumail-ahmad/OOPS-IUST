#include <iostream>
using namespace std;

class date
{
public:
    int m, d, y;
    void get() { cin >> m >> d >> y; }
    void show() { cout << m << "/" << d << "/" << y << " "; }
};

class publication
{
protected:
    string title;
    float price;

public:
    void getdata() { cin >> title >> price; }
    void putdata() { cout << title << " " << price << " "; }
};

class publication2 : public publication
{
protected:
    date pubdate;

public:
    void getdata()
    {
        publication::getdata();
        pubdate.get();
    }
    void putdata()
    {
        publication::putdata();
        pubdate.show();
    }
};

class book : public publication2
{
    int pages;

public:
    void getdata()
    {
        publication2::getdata();
        cin >> pages;
    }
    void putdata()
    {
        publication2::putdata();
        cout << pages << endl;
    }
};

int main()
{
    book b;
    b.getdata();
    b.putdata();
    return 0;
}
