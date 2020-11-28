Node *Order(Node *root, int data)
{
    if (root == NULL)
    {
        root = newNode(data);
        return root;
    }
    if (data <= root->data)
        root->left = Order(root->left, data);
    else
        root->right = Order(root->right, data);
    return root;
}
Node *constructTree(int pre[], int size)
{
    //code here
    Node *root = newNode(pre[0]);
    for (int i = 1; i < size; i++)
        root = Order(root, pre[i]);
    return root;
}