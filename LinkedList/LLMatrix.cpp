Node *constructedLL(int mat[MAX][MAX], int i, int j, int n)
{
    if (i == n || j == n)
        return NULL;
    Node *node = new Node(mat[i][j]);
    node->right = constructedLL(mat, i, j + 1, n);
    node->down = constructedLL(mat, i + 1, j, n);
    return node;
}

Node *constructLinkedMatrix(int mat[MAX][MAX], int n)
{
    return constructedLL(mat, 0, 0, n);
}