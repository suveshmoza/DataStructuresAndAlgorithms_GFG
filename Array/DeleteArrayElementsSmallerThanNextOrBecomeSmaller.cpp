void deleteElements(int arr[], int n, int k)
{
    stack<int> st;
    st.push(arr[0]);
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() && st.top() < arr[i] && count < k)
        {
            st.pop();
            count++;
        }
        st.push(arr[i]);
    }
    int m = st.size();
    vector<int> result(m);
    for (int i = m - 1; i >= 0; i--)
    {
        result[i] = st.top();
        st.pop();
    }
    for (int i = 0; i < m; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}