void printInorder(Node *root, vector<int> &v)
{
    if (root == NULL)
        return;
    printInorder(root->left, v);
    v.push_back(root->data);
    printInorder(root->right, v);
}

vector<int> inOrder(Node *root)
{
    vector<int> v;
    printInorder(root, v);
    return v;
}