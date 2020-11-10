void topView(struct Node *root)
{
    if (!root)
        return;

    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));
    map<int, int> m;

    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        q.pop();
        Node *temp = p.first;
        int hd = p.second;

        if (m.find(hd) == m.end())
        {
            m[hd] = temp->data;
        }
        if (temp->left)
            q.push(make_pair(temp->left, hd - 1));
        if (temp->right)
            q.push(make_pair(temp->right, hd + 1));
    }
    for (auto i : m)
        cout << i.second << " ";
}
