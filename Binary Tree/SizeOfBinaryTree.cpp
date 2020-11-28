int getSize(Node *node)
{
    return node == NULL ? 0 : getSize(node->left) + getSize(node->right) + 1;
}