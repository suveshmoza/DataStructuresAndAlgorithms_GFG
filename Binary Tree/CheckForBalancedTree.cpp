int height(Node *node)
{
    return node == NULL ? 0 : max(height(node->left), height(node->right)) + 1;
}
bool isBalanced(Node *root)
{
    if (root == NULL)
        return true;
    int lh = height(root->left);
    int rh = height(root->right);

    if (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right))
    {
        return true;
    }
    else
        return false;
}