bool search(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->data == x)
        return true;
    if (x < root->data)
        return search(root->left, x);
    else
        return search(root->right, x);
    return false;
}
