vector<int> rightView(Node *root)
{
    if (!root)
        return {};
    vector<int> ans;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        for (int i = 1; i <= size; i++)
        {
            Node *temp = q.front();
            q.pop();
            if (i == size)
            {
                ans.push_back(temp->data);
            }
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
        }
    }
    return ans;
}
