void toBST(Node *root, vector<int> &v, int &i)
{
    if (root == NULL)
        return;
    toBST(root->left, v, i);
    root->data = v[i++];
    toBST(root->right, v, i);
}

void inorder(Node *root, vector<int> &v)
{
    if (root == NULL)
        return;
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

Node *binaryTreeToBST(Node *root)
{
    vector<int> v;
    inorder(root, v);
    sort(v.begin(), v.end());
    int i = 0;
    toBST(root, v, i);
    return root;
}