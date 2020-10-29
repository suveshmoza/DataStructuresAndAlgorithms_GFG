void printPostorder(Node *root, vector<int> &v)
{
    if (root == NULL)
        return;
    printInorder(root->left, v);
    printInorder(root->right, v);
    v.push_back(root->data);
}

vector<int> postOrder(Node *root)
{
    vector<int> v;
    printPostorder(root, v);
    return v;
}