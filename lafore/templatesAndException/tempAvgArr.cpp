#include <iostream>
using namespace std;

template <class T>
double average(T a[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum / n;
}

int main()
{
    int a[] = {1, 2, 3, 4};
    long b[] = {10, 20, 30};
    double c[] = {2.5, 3.5, 4.5};
    char d[] = {'a', 'b', 'c'};

    cout << average(a, 4) << endl;
    cout << average(b, 3) << endl;
    cout << average(c, 3) << endl;
    cout << average(d, 3) << endl;
    return 0;
}
