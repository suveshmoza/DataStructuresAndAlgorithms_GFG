#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned int n;
        cin >> n;
        unsigned int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(b, b + n);
        int q;
        cin >> q;
        while (q--)
        {
            int idx;
            cin >> idx;
            cout << upper_bound(b, b + n, a[idx]) - b << endl;
        }
    }
    return 0;
}