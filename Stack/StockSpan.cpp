vector<int> calculateSpan(int arr[], int n)
{
    vector<int> S(n);
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
    return S;
}