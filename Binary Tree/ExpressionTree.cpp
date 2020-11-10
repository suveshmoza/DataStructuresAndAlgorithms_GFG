int evalTree(node *root)
{
    if (!root)
        return 0;
    if (!root->left && !root->right)
        return stoi(root->data);
    int left = evalTree(root->left);
    int right = evalTree(root->right);
    if (root->data == "+")
        return left + right;
    else if (root->data == "-")
        return left - right;
    else if (root->data == "*")
        return left * right;
    else
        return left / right;
}