int sum(Node *root)
{
    if (root == NULL)
        return 0;
    return sum(root->left) + root->data + sum(root->right);
}

bool isSumTree(Node *root)
{
    int ls, rs;
    if (root == NULL || root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    ls = sum(root->left);
    rs = sum(root->right);
    if ((root->data == ls + rs) && isSumTree(root->left) && isSumTree(root->right))
        return 1;
    return 0;
}