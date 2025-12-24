#include <iostream>
#include <cstring>
using namespace std;

class StrError
{
public:
    string msg;
    StrError(string m) : msg(m) {}
};

class String
{
    char str[80];

public:
    String() { str[0] = '\0'; }

    String(const char s[])
    {
        if (strlen(s) >= 80)
            throw StrError("String too long");
        strcpy(str, s);
    }

    String operator+(const String &s)
    {
        if (strlen(str) + strlen(s.str) >= 80)
            throw StrError("Result too long");
        String temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }

    void show() { cout << str << endl; }
};

int main()
{
    try
    {
        String s1("Hello ");
        String s2("World");
        String s3 = s1 + s2;
        s3.show();
    }
    catch (StrError e)
    {
        cout << e.msg;
    }
    return 0;
}
