Node *inOrderSuccessor(Node *root, Node *x)
{
    if (root == NULL)
        return NULL;
    Node *succ = NULL;
    if (root->data <= x->data)
    {
        succ = inOrderSuccessor(root->right, x);
    }
    else if (root->data > x->data)
    {
        succ = inOrderSuccessor(root->left, x);
        if (succ == NULL)
            succ = root;
    }
    return succ;
}