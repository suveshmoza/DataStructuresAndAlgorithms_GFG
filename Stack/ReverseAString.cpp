void reverse(char *str, int len)
{
    stack<char> S;
    for (int i = 0; i < len; i++)
        S.push(str[i]);
    for (int i = 0; i < len; i++)
    {
        str[i] = S.top();
        S.pop();
    }
}