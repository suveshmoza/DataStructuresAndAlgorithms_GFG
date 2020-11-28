Node *bToDLLHelper(Node *root, Node *&prev)
{
    if (root == NULL)
        return root;
    Node *head = bToDLLHelper(root->left, prev);
    if (prev == NULL)
        head = root;
    else
    {
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    bToDLLHelper(root->right, prev);
    return head;
}

Node *bToDLL(Node *root)
{
    Node *prev = NULL;
    Node *head = bToDLLHelper(root, prev);
    return head;
}
