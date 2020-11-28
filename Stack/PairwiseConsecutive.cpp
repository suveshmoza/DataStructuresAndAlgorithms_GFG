bool pairWiseConsecutive(stack<int> s)
{
    stack<int> st;
    while (!s.empty())
    {
        st.push(s.top());
        s.pop();
    }
    while (st.size() > 1)
    {
        int x = st.top();
        st.pop();
        int y = st.top();
        st.pop();
        if (abs(x - y) != 1)
        {
            return false;
        }
        s.push(x);
        s.push(y);
    }
    return true;
}