void deleteMidRec(stack<int> &s, int n, int count)
{
    if (s.empty() || count == n)
    {
        return;
    }
    int x = s.top();
    s.pop();
    deleteMidRec(s, n, count + 1);
    if (count != n / 2)
    {
        s.push(x);
    }
}

void deleteMid(stack<int> &s, int sizeOfStack)
{
    deleteMidRec(s, sizeOfStack, 0);
}