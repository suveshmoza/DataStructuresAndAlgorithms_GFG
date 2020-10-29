vector<int> reverseLevelOrder(Node *root)
{
    vector<int> res;
    stack<Node *> s;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        s.push(root);
        if (temp->right)
            q.push(root->right);
        if (root->left)
            q.push(root->left);
    }
    while (!s.empty())
    {
        root = s.top();
        res.push_back(root->data);
        s.pop();
    }
    return res;
}