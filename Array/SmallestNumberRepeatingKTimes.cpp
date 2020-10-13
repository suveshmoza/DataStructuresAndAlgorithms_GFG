#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, a[10001] = {0}, count = 0;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            a[arr[i]]++;
        }
        for (int i = 0; i < 10001; i++)
        {
            if (a[i] == k)
            {
                count = 1;
                cout << i << endl;
                break;
            }
        }
        if (count == 0)
        {
            cout << "-1" << endl;
        }
    }
}