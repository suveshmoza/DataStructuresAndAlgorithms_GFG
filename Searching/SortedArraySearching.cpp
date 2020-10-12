#include <iostream>
using namespace std;

int BinarySearch(int arr[], int l, int h, int x)
{
    if (l > h)
        return -1;
    int mid = l + (h - l) / 2;
    if (arr[mid] == x)
        return 1;
    else if (x > arr[mid])
        BinarySearch(arr, mid + 1, h, x);
    else
        BinarySearch(arr, l, mid - 1, x);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << BinarySearch(arr, 0, n - 1, x) << endl;
    }
    return 0;
}