string preorder(Node *root, unordered_map<string, int> &m)
{
    string s;
    if (!root)
    {
        s += "$";
        return s;
    }
    s += root->data;
    s += preorder(root->left, m);
    s += preorder(root->right, m);
    m[s]++;
    return s;
}

bool dupSub(Node *root)
{
    unordered_map<string, int> m;
    preorder(root, m);
    for (auto it : m)
        if (it.second >= 2 && it.first.size() > 3)
            return true;
    return false;
}