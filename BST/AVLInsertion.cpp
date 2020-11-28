int height(Node *root)
{
    if (root == NULL)
        return 0;
    return root->height;
}
Node *rightRotate(Node *z)
{
    Node *y = z->left;
    Node *temp = y->right;

    y->right = z;
    z->left = temp;

    z->height = max(height(z->left), height(z->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;
    return y;
}
Node *leftRotate(Node *x)
{
    Node *y = x->right;
    Node *temp = y->left;

    y->left = x;
    x->right = temp;

    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y;
}
int getBalance(Node *root)
{
    if (root == NULL)
        return 0;
    return height(root->left) - height(root->right);
}
Node *insertToAVL(Node *node, int data)
{
    if (node == NULL)
        return (new Node(data));
    if (data < node->data)
        node->left = insertToAVL(node->left, data);
    else if (data > node->data)
        node->right = insertToAVL(node->right, data);
    else
        return node;

    node->height = 1 + max(height(node->left), height(node->right));

    int balance = getBalance(node);

    //Cases

    if (balance > 1 && data < node->left->data)
        return rightRotate(node);

    if (balance < -1 && data > node->right->data)
        return leftRotate(node);

    if (balance > 1 && data > node->left->data)
    {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    if (balance < -1 && data < node->right->data)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
    return node;
}