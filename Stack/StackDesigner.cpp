stack<int> _push(int arr[], int n)
{
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        st.push(arr[i]);
    }
    return st;
}

void _pop(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}