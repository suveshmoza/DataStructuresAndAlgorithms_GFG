int height(Node *node)
{
    return node == NULL ? 0 : max(height(node->left), height(node->right)) + 1;
}

int diameter(Node *node)
{
    if (node == NULL)
        return 0;
    int lheight = height(node->left);
    int rheight = height(node->right);

    int ldia = diameter(node->left);
    int rdia = diameter(node->right);

    return max((lheight + rheight + 1), max(ldia, rdia));
}