#include <bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

void infixToPostfix(string s)
{
    stack<char> st;
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            res += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (st.empty() != 1 && st.top() != '(')
            {
                char c = st.top();
                res += c;
                st.pop();
            }
            if (st.top() == '(')
            {
                st.pop();
            }
        }
        else
        {
            while (st.empty() != 1 && prec(s[i]) <= prec(st.top()))
            {
                char c = st.top();
                res += c;
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (st.empty() != 1)
    {
        char c = st.top();
        res += c;
        st.pop();
    }
    cout << res << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        infixToPostfix(s);
    }
    return 0;
}