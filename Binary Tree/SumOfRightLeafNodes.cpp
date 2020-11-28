void inorder(Node *root, int &sum)
{
    if (root == NULL)
        return;
    if (root->right != NULL)
    {
        if (root->right->left == NULL & root->right->right == NULL)
        {
            sum += root->right->data;
        }
    }
    inorder(root->left, sum);
    inorder(root->right, sum);
}

int rightLeafSum(Node *root)
{
    int sum = 0;
    inorder(root, sum);
    return sum;
}