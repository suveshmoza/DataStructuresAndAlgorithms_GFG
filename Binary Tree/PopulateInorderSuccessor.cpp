void populateNextRecur(node *root, node *&next)
{
    if (root == NULL)
        return;
    populateNextRecur(root->right, next);
    if (root)
    {
        root->next = next;
        next = root;
    }
    populateNextRecur(root->left, next);
}

void populateNext(struct node *p)
{
    node *next = NULL;
    populateNextRecur(p, next);
}