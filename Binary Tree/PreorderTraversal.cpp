void printPreOrder(Node *root, vector<int> &v)
{
    if (root == NULL)
        return;
    v.push_back(root->data);
    printPreOrder(root->left, v);
    printPreOrder(root->right, v);
}

vector<int> preorder(Node *root)
{
    vector<int> v;
    printPreOrder(root, v);
    return v;
}