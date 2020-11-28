void inorder(Node *root, vector<int> &result)
{
    if (root == NULL)
        return;
    inorder(root->left, result);
    result.push_back(root->data);
    inorder(root->right, result);
}

Node *ArrayToBST(vector<int> result, int low, int high)
{
    if (low > high)
        return NULL;
    int mid = low + (high - low) / 2;
    Node *root = new Node(result[mid]);
    root->left = ArrayToBST(result, low, mid - 1);
    root->right = ArrayToBST(result, mid + 1, high);
    return root;
}

Node *buildBalancedTree(Node *root)
{
    vector<int> result;
    inorder(root, result);
    return ArrayToBST(result, 0, result.size() - 1);
}
