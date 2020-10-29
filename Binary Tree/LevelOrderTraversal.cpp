vector<int> levelOrder(Node *node)
{
    vector<int> list;
    queue<Node *> q;
    q.push(node);
    while (!q.empty())
    {
        Node *temp = q.front();
        list.push_back(temp->data);
        q.pop();
        if (temp->left != NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
    }
    return list;
}