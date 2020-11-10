bool isIsomorphic(Node *a, Node *b)
{
    if (a == NULL && b == NULL)
        return true;
    if (a == NULL || b == NULL)
        return false;
    if (a->data != b->data)
        return false;
    return (isIsomorphic(a->left, b->left) && isIsomorphic(a->right, b->right)) || (isIsomorphic(a->left, b->right) && isIsomorphic(a->right, b->left));
}