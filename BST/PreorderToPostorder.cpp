void inorder(Node *root, vector<int> &v)
{
    if (root == NULL)
        return;
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

vector<int> merge(Node *root1, Node *root2)
{
    vector<int> v1, v2;
    inorder(root1, v1);
    inorder(root2, v2);
    vector<int> v(v1.size() + v2.size());
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
    return v;
}