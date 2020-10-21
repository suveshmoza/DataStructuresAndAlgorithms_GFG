// Recursive Approach
//
void insert(stack<int> &s, int x)
{
    stack<int> temp;
    while (!s.empty() && s.top() > x)
    {
        temp.push(s.top());
        s.pop();
    }
    s.push(x);
    while (!temp.empty())
    {
        s.push(temp.top());
        temp.pop();
    }
}
void SortedStack ::sort()
{

    if (!s.empty())
    {
        int x;
        x = s.top();
        s.pop();
        SortedStack::sort();
        insert(s, x);
    }
}

//Simple Approach
//
void SortedStack ::sort()
{
    int n = s.size();
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = s.top();
        s.pop();
    }
    std::sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        s.push(arr[i]);
    }
}