int search(int in[], int s, int e, int data)
{
    for (int i = s; i <= e; i++)
    {
        if (in[i] == data)
        {
            return i;
        }
    }
}

Node *build(int in[], int post[], int s, int e, int &postIndex)
{
    if (s > e)
        return NULL;
    Node *tNode = new Node(post[postIndex--]);
    if (s == e)
        return tNode;
    int index = search(in, s, e, tNode->data);
    tNode->right = build(in, post, index + 1, e, postIndex);
    tNode->left = build(in, post, s, index - 1, postIndex);
    return tNode;
}

Node *buildTree(int in[], int post[], int n)
{
    int postIndex = n - 1;
    Node *root = build(in, post, 0, n - 1, postIndex);
    return root;
}