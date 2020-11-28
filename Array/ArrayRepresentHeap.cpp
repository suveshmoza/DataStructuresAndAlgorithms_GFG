#include <iostream>
using namespace std;

int isHeap(int arr[], int n)
{
    for (int i = 0; i <= (n - 2) / 2; i++)
    {
        if (2 * i + 1 < n && arr[2 * i + 1] > arr[i])
        {
            return 0;
        }
        if (2 * i + 2 < n && arr[2 * i + 2] > arr[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << isHeap(arr, n) << endl;
    }
    return 0;
}