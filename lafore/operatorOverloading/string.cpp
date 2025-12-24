#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char s[80];

public:
    String(const char x[] = "") { strcpy(s, x); }
    String &operator+=(String a)
    {
        strcat(s, a.s);
        return *this;
    }
    void show() { cout << s << endl; }
};

int main()
{
    String s1("Hello "), s2("World");
    String s3 = s1 += s2;
    s3.show();
}
