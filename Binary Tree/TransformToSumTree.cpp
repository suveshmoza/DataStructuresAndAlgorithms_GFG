int sum(Node *root)
{
    if (root == NULL)
        return 0;
    int data = root->data;
    root->data = sum(root->left) + sum(root->right);
    return root->data + data;
}
void toSumTree(Node *root)
{
    sum(root);
}