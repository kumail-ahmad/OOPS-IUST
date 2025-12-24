#include <iostream>
using namespace std;

template <class T>
class Queue
{
    T arr[5];
    int head, tail, count;

public:
    Queue() { head = tail = count = 0; }
    void put(T v)
    {
        if (count == 5)
            throw "Queue Full";
        arr[tail++] = v;
        count++;
    }
    T get()
    {
        if (count == 0)
            throw "Queue Empty";
        count--;
        return arr[head++];
    }
};

int main()
{
    Queue<int> q;
    try
    {
        q.put(1);
        q.put(2);
        cout << q.get() << endl;
        cout << q.get() << endl;
        cout << q.get() << endl;
    }
    catch (const char *s)
    {
        cout << s;
    }
    return 0;
}
