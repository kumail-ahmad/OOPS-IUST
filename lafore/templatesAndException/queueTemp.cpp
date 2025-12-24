#include <iostream>
using namespace std;

template <class T>
class Queue
{
    T arr[10];
    int head, tail;

public:
    Queue() { head = tail = 0; }
    void put(T v) { arr[tail++] = v; }
    T get() { return arr[head++]; }
};

int main()
{
    Queue<int> qi;
    qi.put(1);
    qi.put(2);
    cout << qi.get() << " " << qi.get() << endl;

    Queue<char> qc;
    qc.put('A');
    qc.put('B');
    cout << qc.get() << " " << qc.get();
    return 0;
}
