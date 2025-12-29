#include <iostream>
using namespace std;

void findMinMax(int *arr, int n, int &min, int &max)
{
    min = max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
}

int main()
{
    int arr[] = {4, 9, 2, 7, 5};
    int min, max;
    findMinMax(arr, 5, min, max);
    cout << min << " " << max;
    return 0;
}
