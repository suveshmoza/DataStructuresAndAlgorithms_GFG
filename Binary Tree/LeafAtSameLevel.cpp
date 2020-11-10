bool checkUtil(Node *root, int level, int &llevel)
{
    if (root == NULL)
        return true;
    if (root->left == NULL && root->right == NULL)
    {
        if (llevel == 0)
        {
            llevel = level;
            return true;
        }
        return llevel == level;
    }
    return checkUtil(root->left, level + 1, llevel) && checkUtil(root->right, level + 1, llevel);
}

bool check(Node *root)
{
    int level = 0, llevel = 0;
    return checkUtil(root, level, llevel);
}