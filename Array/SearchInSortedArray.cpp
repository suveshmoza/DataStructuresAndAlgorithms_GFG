#include <iostream>
using namespace std;
int BinarySearch(int a[], int l, int r, int x)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] == x)
            return mid;
        if (a[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (BinarySearch(a, 0, n, x) != -1)
        {
            cout << "1" << endl;
        }
        else
            cout << "-1" << endl;
    }
    return 0;
}