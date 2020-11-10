void printBoundaryLeft(Node *root, vector<int> &res)
{
    if (root == NULL)
        return;
    if (root->left != NULL)
    {
        res.push_back(root->data);
        printBoundaryLeft(root->left, res);
    }
    else if (root->right != NULL)
    {
        res.push_back(root->data);
        printBoundaryLeft(root->right, res);
    }
}
void printLeaf(Node *root, vector<int> &res)
{
    if (root == NULL)
        return;
    printLeaf(root->left, res);
    if (!(root->left) && !(root->right))
        res.push_back(root->data);
    printLeaf(root->right, res);
}
void printBoundaryRight(Node *root, vector<int> &res)
{
    if (root == NULL)
        return;
    if (root->right != NULL)
    {
        printBoundaryRight(root->right, res);
        res.push_back(root->data);
    }
    else if (root->left != NULL)
    {
        printBoundaryRight(root->left, res);
        res.push_back(root->data);
    }
    else
        return;
}

vector<int> printBoundary(Node *root)
{
    vector<int> res;
    if (root == NULL)
        return {};
    res.push_back(root->data);

    printBoundaryLeft(root->left, res);
    printLeaf(root->left, res);
    printLeaf(root->right, res);
    printBoundaryRight(root->right, res);

    return res;
}