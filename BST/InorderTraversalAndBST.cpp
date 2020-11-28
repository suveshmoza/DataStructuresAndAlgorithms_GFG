#include <bits/stdc++.h>
using namespace std;

int isInorderBST(int in[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (in[i] >= in[i + 1])
            return 0;
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
        cout << isInorderBST(arr, n) << endl;
    }
    return 0;
}