void inorderSum(Node *root, int &sum)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        sum += root->data;
    }
    inorderSum(root->left, sum);
    inorderSum(root->right, sum);
}

int sumLeaf(Node *root)
{
    int sum = 0;
    inorderSum(root, sum);
    return sum;
}