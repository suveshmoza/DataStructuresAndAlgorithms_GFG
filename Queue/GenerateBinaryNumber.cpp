vector<string> generate(ll n)
{
    queue<string> q;
    vector<string> v;
    q.push("1");
    while (n--)
    {
        string S = q.front();
        v.push_back(S);
        q.pop();
        q.push(S + "0");
        q.push(S + "1");
    }
    return v;
}