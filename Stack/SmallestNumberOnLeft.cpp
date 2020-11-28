#include <bits/stdc++.h>
using namespace std;

void NSE(long long int arr[], int n)
{
    long long int res[n];
    stack<long long int> s;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && arr[i] <= s.top())
        {
            s.pop();
        }
        res[i] = s.empty() ? -1 : s.top();
        s.push(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        NSE(arr, n);
    }

    return 0;
}