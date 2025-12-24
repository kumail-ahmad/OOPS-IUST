#include <iostream>
using namespace std;

class sterling
{
protected:
    long pounds;
    int shillings, pence;

public:
    sterling(long p = 0, int s = 0, int pe = 0) : pounds(p), shillings(s), pence(pe) {}
};

class sterfrac : public sterling
{
    int eighths;

public:
    sterfrac(long p, int s, int pe, int e) : sterling(p, s, pe), eighths(e) {}
    void show()
    {
        cout << "£" << pounds << "." << shillings << "." << pence << "-" << eighths << "/8";
    }
};

int main()
{
    sterfrac s(1, 2, 3, 5);
    s.show();
    return 0;
}
