#include <iostream>
using namespace std;

class publication
{
protected:
    string title;
    float price;

public:
    virtual void getdata()
    {
        cin >> title >> price;
    }
    virtual void putdata()
    {
        cout << title << " " << price;
    }
    virtual ~publication() {}
};

class book : public publication
{
    int pages;

public:
    void getdata()
    {
        publication::getdata();
        cin >> pages;
    }
    void putdata()
    {
        publication::putdata();
        cout << " " << pages;
    }
};

class tape : public publication
{
    float minutes;

public:
    void getdata()
    {
        publication::getdata();
        cin >> minutes;
    }
    void putdata()
    {
        publication::putdata();
        cout << " " << minutes;
    }
};

int main()
{
    publication *arr[10];
    int count = 0;
    char ch;

    do
    {
        cin >> ch;
        if (ch == 'b')
            arr[count] = new book;
        else
            arr[count] = new tape;
        arr[count]->getdata();
        count++;
        cin >> ch;
    } while (ch == 'y');

    for (int i = 0; i < count; i++)
        arr[i]->putdata(), cout << endl;

    return 0;
}
