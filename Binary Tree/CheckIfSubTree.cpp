bool areIdentical(Node *root1, Node *root2)
{
    if (root1 == NULL && root2 == NULL)
        return true;
    if (root1 == NULL || root2 == NULL)
        return false;

    return root1->data == root2->data && areIdentical(root1->left, root2->left) && areIdentical(root1->right, root2->right);
}

bool isSubTree(Node *T, Node *S)
{
    if (T == NULL)
        return false;
    if (S == NULL)
        return true;
    if (areIdentical(T, S))
        return true;
    return isSubTree(T->left, S) || isSubTree(T->right, S);
}
