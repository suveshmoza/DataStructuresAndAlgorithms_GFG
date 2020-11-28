int minValue(Node *root)
{
    while (root->left)
    {
        root = root->left;
    }
    return root->data;
}
