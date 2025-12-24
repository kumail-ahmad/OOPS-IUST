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

enum dtype
{
    CD,
    DVD
};

class disk : public publication
{
    dtype type;

public:
    void getdata()
    {
        publication::getdata();
        char c;
        cin >> c;
        type = (c == 'c') ? CD : DVD;
    }
    void putdata()
    {
        publication::putdata();
        cout << (type == CD ? "CD" : "DVD") << endl;
    }
};

int main()
{
    disk d;
    d.getdata();
    d.putdata();
    return 0;
}
