#include <bits/stdc++.h>
using namespace std;

int CountReversals(string s, int n)
{
    if (n % 2)
    {
        return -1;
    }
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (!st.empty() && s[i] == '}')
        {
            if (st.top() == '{')
                st.pop();
            else
                st.push(s[i]);
        }
        else
            st.push(s[i]);
    }
    int reducedLen = st.size();

    int count = 0;
    while (!st.empty() && st.top() == '{')
    {
        count++;
        st.pop();
    }
    return (reducedLen / 2 + count % 2);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        cout << CountReversals(str, str.length()) << endl;
    }
    return 0;
}