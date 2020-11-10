vector<int> bottomView(Node *root)
{
    vector<int> res;
    if (!root)
        return {};

    queue<pair<Node *, int>> q;
    int hd = 0;
    q.push(make_pair(root, hd));
    map<int, int> m;

    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        q.pop();
        Node *temp = p.first;
        hd = p.second;
        m[hd] = temp->data;

        if (temp->left)
            q.push(make_pair(temp->left, hd - 1));
        if (temp->right)
            q.push(make_pair(temp->right, hd + 1));
    }
    for (auto i : m)
    {
        res.push_back(i.second);
    }
    return res;
}
