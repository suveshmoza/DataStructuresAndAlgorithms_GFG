void convert(Node *head, TreeNode *&root)
{
    queue<TreeNode *> q;
    if (head == NULL)
        return;
    root = new TreeNode(head->data);
    q.push(root);
    head = head->next;
    while (head != NULL)
    {
        TreeNode *parent = q.front();
        q.pop();
        TreeNode *left = NULL, *right = NULL;
        left = new TreeNode(head->data);
        q.push(left);
        head = head->next;
        if (head != NULL)
        {
            right = new TreeNode(head->data);
            q.push(right);
            head = head->next;
        }
        parent->left = left;
        parent->right = right;
    }
}
