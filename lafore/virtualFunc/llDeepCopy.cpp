#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int d) : data(d), next(nullptr) {}
};

class linklist
{
    node *first;

public:
    linklist() : first(nullptr) {}

    linklist(const linklist &l)
    {
        first = nullptr;
        node *temp = l.first;
        while (temp)
        {
            insert(temp->data);
            temp = temp->next;
        }
    }

    void insert(int d)
    {
        node *n = new node(d);
        n->next = first;
        first = n;
    }

    void display()
    {
        node *t = first;
        while (t)
        {
            cout << t->data << " ";
            t = t->next;
        }
    }
};

int main()
{
    linklist l1;
    l1.insert(1);
    l1.insert(2);

    linklist l2 = l1;
    l2.display();
    return 0;
}
