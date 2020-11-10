Node *lca(Node *root, int a, int b)
{
    if (!root)
        return NULL;
    if (root->data == a || root->data == b)
        return root;
    Node *left = lca(root->left, a, b);
    Node *right = lca(root->right, a, b);
    if (left && right)
        return root;
    else
        return left ? left : right;
}

int findLevel(Node *root, int key, int level)
{
    if (!root)
        return -1;
    if (root->data == key)
        return level;
    int left = findLevel(root->left, key, level + 1);
    if (left == -1)
    {
        return findLevel(root->right, key, level + 1);
    }
    return left;
}

int findDist(Node *root, int a, int b)
{
    Node *LCA = lca(root, a, b);
    int d1 = findLevel(LCA, a, 0);
    int d2 = findLevel(LCA, b, 0);
    return d1 + d2;
}