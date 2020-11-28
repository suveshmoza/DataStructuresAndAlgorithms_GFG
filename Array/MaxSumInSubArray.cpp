#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long res = 0;
        for (int i = 0; i < n - 1; i++)
        {
            res = max(res, arr[i] + arr[i + 1]);
        }
        cout << res << endl;
    }
    return 0;
}