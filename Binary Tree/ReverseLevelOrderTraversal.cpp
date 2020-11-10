vector<int> reverseLevelOrder(Node *root)
{
    vector<int> list;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        list.push_back(temp->data);
        q.pop();
        if (temp->right != NULL)
            q.push(temp->right);
        if (temp->left != NULL)
            q.push(temp->left);
    }
    reverse(list.begin(), list.end());
    return list;
}