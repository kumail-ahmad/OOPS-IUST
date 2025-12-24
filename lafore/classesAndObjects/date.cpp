#include <iostream>
using namespace std;

class date
{
    int m, d, y;

public:
    void getdate()
    {
        char c;
        cin >> m >> c >> d >> c >> y;
    }
    void showdate()
    {
        cout << m << "/" << d << "/" << y << endl;
    }
};

int main()
{
    date d;
    d.getdate();
    d.showdate();
    return 0;
}
