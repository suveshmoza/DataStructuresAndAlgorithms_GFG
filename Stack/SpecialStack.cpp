void push(int a)
{
    if (s.empty())
    {
        s.push(a);
        s.push(a);
        return;
    }
    if (a < s.top())
    {
        s.push(a);
        s.push(a);
        return;
    }
    int minEle = s.top();
    s.push(a);
    s.push(minEle);
    return;
}

bool isFull(int n)
{
    if (s.size() >= 2 * n)
        return true;
    return false;
}

bool isEmpty()
{
    if (s.size() == 0)
        return true;
    return false;
}

int pop()
{
    if (isEmpty())
        return -1;
    s.pop();
    int ele = s.top();
    s.pop();
    return ele;
}

int getMin()
{
    return s.top();
}