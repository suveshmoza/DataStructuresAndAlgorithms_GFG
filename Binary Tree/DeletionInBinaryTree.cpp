void deleteit(Node *root, Node *lastnode)
{
    queue<Node *> q1;
    q1.push(root);

    Node *temp = root;
    while (!q1.empty())
    {
        temp = q1.front();
        q1.pop();

        if (temp && temp->left)
        {
            if (temp->left == lastnode)
            {
                temp->left = NULL;
                delete (lastnode);
                return;
            }
            else
            {
                q1.push(temp->left);
            }
        }

        if (temp && temp->right)
        {
            if (temp->right == lastnode)
            {
                temp->right = NULL;
                delete (lastnode);
                return;
            }
            else
            {
                q1.push(temp->right);
            }
        }
    }
}

void deletionBT(struct Node *root, int data)
{

    queue<Node *> q;
    q.push(root);

    Node *temp = root, *Knode = NULL;

    while (temp && !q.empty())
    {
        temp = q.front();
        q.pop();

        if (temp->data == data)
            Knode = temp;

        if (temp->left)
            q.push(temp->left);

        if (temp->right)
            q.push(temp->right);
    }
    if (Knode == NULL)
        return;

    int x = temp->data;
    Knode->data = x;
    deleteit(root, temp);
}