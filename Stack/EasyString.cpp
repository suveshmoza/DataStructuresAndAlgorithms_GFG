#include <bits/stdc++.h>
using namespace std;

void easyString(string str, int n)
{
    stack<char> st;
    int count = 1;
    st.push(tolower(str[0]));
    for (int i = 1; i < n; i++)
    {
        if (st.top() == tolower(str[i]))
        {
            st.push(tolower(str[i]));
            count++;
        }
        else
        {
            cout << count << st.top();
            st.push(tolower(str[i]));
            count = 1;
        }
    }
    cout << count << st.top();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        easyString(str, str.length());
        cout << endl;
    }
    return 0;
}