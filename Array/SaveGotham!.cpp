#include <bits/stdc++.h>
using namespace std;

void NGE(int arr[], int n)
{
    int result[n];
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && arr[i] >= st.top())
        {
            st.pop();
        }
        result[i] = st.empty() ? 0 : st.top();
        st.push(arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += result[i];
    }
    cout << sum << endl;
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
        {
            cin >> arr[i];
        }
        NGE(arr, n);
    }
    return 0;
}