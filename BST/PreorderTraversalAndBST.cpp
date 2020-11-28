#include <bits/stdc++.h>
using namespace std;

int isArrayPreorder(int pre[], int n)
{
    stack<int> st;
    int root = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (pre[i] < root)
            return 0;
        while (!st.empty() && pre[i] > st.top())
        {
            root = st.top();
            st.pop();
        }
        st.push(pre[i]);
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
        cout << isArrayPreorder(arr, n) << endl;
    }
    return 0;
}