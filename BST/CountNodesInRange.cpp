int getCountOfNode(Node *root, int low, int high)
{
    if (!root)
        return 0;
    if (root->data == high && root->data == low)
        return 1;
    if (root->data <= high && root->data >= low)
        return 1 + getCountOfNode(root->left, low, high) + getCountOfNode(root->right, low, high);
    else if (root->data < low)
        return getCountOfNode(root->right, low, high);
    else
        return getCountOfNode(root->left, low, high);
}