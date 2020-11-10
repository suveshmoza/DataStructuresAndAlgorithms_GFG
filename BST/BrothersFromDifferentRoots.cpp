void inorder(Node *root, vector<int> &v)
{
    if (!root)
        return;
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

int countPairs(Node *root1, Node *root2, int x)
{
    int count = 0;
    vector<int> v1, v2;
    inorder(root1, v1);
    inorder(root2, v2);
    for (int i = 0; i < v1.size(); i++)
    {
        if (find(v2.begin(), v2.end(), (x - v1[i])) != v2.end())
            count++;
    }
    return count;
}