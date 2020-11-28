void inorder(Node *root, vector<int> &v)
{
    if (root == NULL)
        return;
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

float findMedian(struct Node *root)
{
    vector<int> v;
    inorder(root, v);
    if (v.size() % 2 != 0)
    {
        return v[v.size() / 2];
    }
    int mid = v.size() / 2;
    return (v[mid] + v[mid - 1]) / 2.0;
}
