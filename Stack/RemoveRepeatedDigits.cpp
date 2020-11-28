#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        stack<int> st;
        while (n != 0)
        {
            long long num = n % 10;
            if (st.empty() || st.top() != num)
            {
                st.push(num);
            }
            n /= 10;
        }
        while (!st.empty())
        {
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
    return 0;
}