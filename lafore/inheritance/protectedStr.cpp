#include <iostream>
#include <cstring>
using namespace std;

class String
{
protected:
    static const int SZ = 80;
    char str[SZ];

public:
    String(const char s[] = "")
    {
        strcpy(str, s);
    }
    void show() { cout << str << endl; }
};

class Pstring : public String
{
public:
    Pstring(const char s[])
    {
        strncpy(str, s, SZ - 1);
        str[SZ - 1] = '\0';
    }
};

int main()
{
    Pstring s1("Short string");
    Pstring s2("This string is very long and will be truncated safely");
    s1.show();
    s2.show();
    return 0;
}
