#include <bits/stdc++.h>
using namespace std;

int Manipulate(vector<string> v)
{
    stack<string> st;
    for (int i = 0; i < v.size(); i++)
    {
        if (st.empty())
        {
            st.push(v[i]);
        }
        else
        {
            string topstr = st.top();

            if (topstr.compare(v[i]) == 0)
            {
                st.pop();
            }
            else
            {
                st.push(v[i]);
            }
        }
    }
    return st.size();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cout << Manipulate(v) << endl;
    }
    return 0;
}