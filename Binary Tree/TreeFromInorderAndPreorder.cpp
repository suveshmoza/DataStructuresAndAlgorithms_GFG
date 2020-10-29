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

Node *build(int in[], int pre[], int s, int e, int &preIndex)
{
    if (s > e)
        return NULL;
    Node *tNode = new Node(pre[preIndex++]);
    if (s == e)
        return tNode;
    int inIndex = search(in, s, e, tNode->data);
    tNode->left = build(in, pre, s, inIndex - 1, preIndex);
    tNode->right = build(in, pre, inIndex + 1, e, preIndex);
    return tNode;
}

Node *buildTree(int in[], int pre[], int n)
{
    int preIndex = 0;
    Node *root = build(in, pre, 0, n - 1, preIndex);
    return root;
}