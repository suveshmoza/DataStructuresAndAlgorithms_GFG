bool kthAncestorUtil(Node *root, int node, vector<int> &res)
{
    if (!root)
        return false;
    res.push_back(root->data);
    if (root->data == node)
        return true;
    if (kthAncestorUtil(root->left, node, res) || kthAncestorUtil(root->right, node, res))
        return true;
    res.pop_back();
    return false;
}

int kthAncestor(Node *root, int k, int node)
{
    vector<int> res;
    kthAncestorUtil(root, node, res);
    if (res.size() <= k)
        return -1;
    return res[res.size() - k - 1];
}