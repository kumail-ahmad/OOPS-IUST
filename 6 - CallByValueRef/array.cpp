#include <iostream>
#include <climits>
using namespace std;

void findMinMax(int *arr, int n, int &min, int &max)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return;
}

int main()

{
    int arr[] = {41, -2, 3, 34, 5, 8};
    int min = INT_MAX;
    int max = INT_MIN;
    int n = sizeof(arr) / sizeof(arr[0]);
    findMinMax(arr, n, min, max);
    cout << "Minimum value: " << min << endl;
    cout << "Maximum value: " << max << endl;

    return 0;
}