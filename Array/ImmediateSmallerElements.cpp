void immediateSmaller(int *arr, int n)
{
    stack<int> s;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            s.push(arr[i + 1]);
        }
        else
            s.push(-1);
    }
    s.push(-1);
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i] = s.top();
        s.pop();
    }
}