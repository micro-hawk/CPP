//MicroHawk 2020
#include <iostream>
using namespace std;

int minimum(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int maximum(int arr[], int m)
{
    int max = arr[0];
    for (int i = 0; i < m; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        arr[i] = input;
    }
    int min = minimum(arr, n);
    cout << min << endl;

    int maxd = maximum(arr, n);
    cout << maxd << endl;
    return 0;
}
