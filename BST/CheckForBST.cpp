int BSTutil(Node *root, int min, int max)
{
    if (root == NULL)
    {
        return 1;
    }
    if (root->data < min || root->data > max)
    {
        return 0;
    }
    return BSTutil(root->left, min, root->data - 1) && BSTutil(root->right, root->data + 1, max);
}

bool isBST(Node *root)
{
    if (BSTutil(root, INT_MIN, INT_MAX))
    {
        return 1;
    }
    else
        return 0;
}