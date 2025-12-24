#include <iostream>
#include <cstring>
using namespace std;

class Pstring
{
protected:
    char str[80];

public:
    Pstring(const char s[] = "") { strcpy(str, s); }
};

class Pstring2 : public Pstring
{
public:
    using Pstring::Pstring;

    void left(Pstring2 s, int n)
    {
        strncpy(str, s.str, n);
        str[n] = '\0';
    }
    void mid(Pstring2 s, int start, int n)
    {
        strncpy(str, s.str + start, n);
        str[n] = '\0';
    }
    void right(Pstring2 s, int n)
    {
        int len = strlen(s.str);
        strncpy(str, s.str + len - n, n);
        str[n] = '\0';
    }
    void show() { cout << str << endl; }
};

int main()
{
    Pstring2 s1("InheritanceExample"), s2;
    s2.left(s1, 5);
    s2.show();
    s2.mid(s1, 5, 4);
    s2.show();
    s2.right(s1, 7);
    s2.show();
    return 0;
}
