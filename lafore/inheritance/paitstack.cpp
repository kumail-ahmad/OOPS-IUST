#include <iostream>
using namespace std;

struct pair2
{
    int x, y;
};

class Stack2
{
protected:
    int arr[20];
    int top;

public:
    Stack2() : top(0) {}
    void push(int v) { arr[top++] = v; }
    int pop() { return arr[--top]; }
};

class pairStack : public Stack2
{
public:
    void push(pair2 p)
    {
        Stack2::push(p.x);
        Stack2::push(p.y);
    }
    pair2 pop()
    {
        pair2 p;
        p.y = Stack2::pop();
        p.x = Stack2::pop();
        return p;
    }
};

int main()
{
    pairStack ps;
    pair2 p = {3, 4};
    ps.push(p);
    pair2 r = ps.pop();
    cout << r.x << " " << r.y;
    return 0;
}
