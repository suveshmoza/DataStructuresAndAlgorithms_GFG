#include <bits/stdc++.h>
using namespace std;

void calculateSpan(int arr[], int S[], int n)
{
    stack<int> st;
    st.push(0);
    S[0] = 1;
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() && arr[i] >= arr[st.top()])
        {
            st.pop();
        }
        if (st.empty())
        {
            S[i] = i + 1;
        }
        else
        {
            S[i] = i - st.top();
        }
        st.push(i);
    }
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
        int S[n];
        calculateSpan(arr, S, n);
        for (int i = 0; i < n; i++)
        {
            cout << S[i] << " ";
        }
        cout << endl;
    }
    return 0;
}