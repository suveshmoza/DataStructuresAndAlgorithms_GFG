#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int result = 0;
        string str;
        cin >> str;
        int n = str.length();
        stack<int> st;
        st.push(-1);
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '(')
            {
                st.push(i);
            }
            else
            {
                if (!st.empty())
                {
                    st.pop();
                }
                if (!st.empty())
                {
                    result = max(result, i - st.top());
                }
                else
                    st.push(i);
            }
        }
        cout << result << endl;
    }
    return 0;
}