#include <iostream>
using namespace std;

class publication
{
public:
    virtual bool isOversize() = 0;
};

class book : public publication
{
    int pages;

public:
    book(int p) : pages(p) {}
    bool isOversize() { return pages > 800; }
};

class tape : public publication
{
    float time;

public:
    tape(float t) : time(t) {}
    bool isOversize() { return time > 90; }
};

int main()
{
    publication *p1 = new book(900);
    publication *p2 = new tape(60);

    if (p1->isOversize())
        cout << "Oversize\n";
    if (p2->isOversize())
        cout << "Oversize\n";

    return 0;
}
