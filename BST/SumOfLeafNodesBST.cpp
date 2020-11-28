void inorder(Node *root, int &sum)
{
    if (root == NULL)
        return;
    if (root->left == NULL & root->right == NULL)
    {
        sum += root->data;
    }
    inorder(root->left, sum);
    inorder(root->right, sum);
}

int sumOfLeafNodes(Node *root)
{
    int sum = 0;
    inorder(root, sum);
    return sum;
}