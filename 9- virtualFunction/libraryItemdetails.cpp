#include <iostream>
using namespace std;

class LibraryItem
{
public:
    virtual void displayInfo() = 0;
};

class Book : public LibraryItem
{
public:
    void displayInfo() { cout << "Book" << endl; }
};

class Magazine : public LibraryItem
{
public:
    void displayInfo() { cout << "Magazine" << endl; }
};

class DVD : public LibraryItem
{
public:
    void displayInfo() { cout << "DVD" << endl; }
};

int main()
{
    LibraryItem *l[3];
    l[0] = new Book();
    l[1] = new Magazine();
    l[2] = new DVD();

    for (int i = 0; i < 3; i++)
        l[i]->displayInfo();
    return 0;
}
