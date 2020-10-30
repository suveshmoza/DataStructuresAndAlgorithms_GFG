void printPathsRecur(Node *root, vector<vector<int>> &res, vector<int> &v)
{
    if (!root)
        return;
    v.push_back(root->data);
    if (!root->left && !root->right)
    {
        res.push_back(v);
        v.pop_back();
        return;
    }
    printPathsRecur(root->left, res, v);
    printPathsRecur(root->right, res, v);
    v.pop_back();
}

vector<vector<int>> Paths(Node *root)
{
    vector<vector<int>> res;
    vector<int> v;
    printPathsRecur(root, res, v);
    return res;
}