#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], left[n], right[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        stack<int> s;
        s.push(n - 1);
        right[n - 1] = n;
        for (int i = n - 2; i >= 0; i--)
        {
            while (!s.empty() && arr[i] <= arr[s.top()])
            {
                s.pop();
            }
            if (s.empty())
            {
                right[i] = n;
            }
            else
            {
                right[i] = s.top();
            }
            s.push(i);
        }
        stack<int> s1;
        s1.push(0);
        left[0] = -1;
        for (int i = 1; i < n; i++)
        {
            while (!s1.empty() && arr[i] <= arr[s1.top()])
            {
                s1.pop();
            }
            if (s1.empty())
            {
                left[i] = -1;
            }
            else
            {
                left[i] = s1.top();
            }
            s1.push(i);
        }

        int maxArea = 0;
        for (int i = 0; i < n; i++)
        {
            int width = right[i] - left[i] - 1;
            int area = arr[i] * width;
            if (area > maxArea)
            {
                maxArea = area;
            }
        }
        cout << maxArea << endl;
    }
    return 0;
}