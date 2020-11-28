void inorder(Node *root, int K, int &index, int &KthElement)
{
    if (root == NULL)
        return;
    inorder(root->left, K, index, KthElement);
    if (index == K)
    {
        KthElement = root->data;
    }
    index++;
    inorder(root->right, K, index, KthElement);
}

int KthSmallestElement(Node *root, int K)
{
    int KthElement = -1;
    int index = 1;
    inorder(root, K, index, KthElement);
    return KthElement;
}