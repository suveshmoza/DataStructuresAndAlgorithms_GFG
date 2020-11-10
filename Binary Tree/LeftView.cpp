vector<int> leftView(Node *root)
{
    if (root == NULL)
        return {};
    vector<int> v;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        v.push_back(temp->data);
        while (!q.empty())
        {
            q.pop();
        }
        if (temp->left != NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
    }
    return v;
}