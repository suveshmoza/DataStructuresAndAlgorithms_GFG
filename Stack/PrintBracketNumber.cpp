vector<int> barcketNumbers(string S)
{
    vector<int> res;
    stack<int> st;
    int count = 1;
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == '(')
        {
            res.push_back(count);
            st.push(count);
            count++;
        }
        else if (S[i] == ')')
        {
            res.push_back(st.top());
            st.pop();
        }
    }
    return res;
}