long int sumBT(Node *root)
{
    if (root != NULL)
    {
        return root->key + sumBT(root->left) + sumBT(root->right);
    }
    return 0;
}