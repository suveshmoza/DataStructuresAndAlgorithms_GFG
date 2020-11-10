bool deadEnd(Node *root, int min, int max)
{
    if (!root)
        return false;
    if (min == max)
        return true;
    return deadEnd(root->left, min, root->data - 1) || deadEnd(root->right, root->data + 1, max);
}

bool isDeadEnd(Node *root)
{
    int min = 1, max = INT_MAX;
    deadEnd(root, min, max);
}