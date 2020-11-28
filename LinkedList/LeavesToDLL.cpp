Node *inorder(Node *root, Node **head)
{
    static Node *prev = NULL;
    if (!root)
        return NULL;
    if (!root->left && !root->right)
    {
        if (!(*head))
            *head = root;
        else
        {
            root->left = prev;
            prev->right = root;
        }
        prev = root;
        return NULL;
    }
    root->left = inorder(root->left, head);
    root->right = inorder(root->right, head);
}

Node *convertToDLL(Node *root)
{
    Node *head = NULL;
    inorder(root, &head);
    return head;
}