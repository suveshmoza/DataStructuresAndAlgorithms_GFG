Node *bTreeToDLL(Node *root, Node *&prev)
{
    if (root == NULL)
        return root;
    Node *head = bTreeToDLL(root->left, prev);
    if (prev == NULL)
        head = root;
    else
    {
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    bTreeToDLL(root->right, prev);
    return head;
}
Node *bTreeToCList(Node *root)
{
    if (root == NULL)
        return NULL;
    Node *prev = NULL;
    Node *head = bTreeToDLL(root, prev);
    prev->right = head;
    head->left = prev;
    return head;
}