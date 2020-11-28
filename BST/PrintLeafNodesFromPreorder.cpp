#include <bits/stdc++.h>
using namespace std;

void LeafNodes(int preorder[], int n)
{
    stack<int> st;
    for (int i = 0, j = 1; j < n; i++, j++)
    {
        bool found = false;
        if (preorder[i] > preorder[j])
        {
            st.push(preorder[i]);
        }
        else
        {
            while (!st.empty())
            {
                if (preorder[j] > st.top())
                {
                    st.pop();
                    found = true;
                }
                else
                {
                    break;
                }
            }
        }
        if (found == true)
        {
            cout << preorder[i] << " ";
        }
    }
    cout << preorder[n - 1];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        LeafNodes(arr, n);
        cout << endl;
    }
    return 0;
}