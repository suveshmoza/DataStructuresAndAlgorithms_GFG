int findMaxDiff(int A[], int n)
{
    int left[n], right[n];
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && A[i] <= s.top())
        {
            s.pop();
        }
        left[i] = s.empty() ? 0 : s.top();
        s.push(A[i]);
    }
    stack<int> s2;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s2.empty() && A[i] <= s2.top())
        {
            s2.pop();
        }
        right[i] = s2.empty() ? 0 : s2.top();
        s2.push(A[i]);
    }

    int maxDiff = 0;
    for (int i = 0; i < n; i++)
    {
        maxDiff = max(maxDiff, (abs(left[i] - right[i])));
    }
    return maxDiff;
}