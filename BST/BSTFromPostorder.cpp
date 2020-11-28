Node *construct(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    if (root->data > data)
    {
        root->left = construct(root->left, data);
    }
    else
    {
        root->right = construct(root->right, data);
    }
}

Node *constructTree(int post[], int size)
{
    Node *root = NULL;
    for (int i = 0; i < size; i++)
    {
        root = construct(root, post[i]);
    }
    return root;
}