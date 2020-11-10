vector<int> findSpiral(Node *root)
{
    vector<int> arr;
    queue<Node *> q;
    q.push(root);
    int i = 1;
    while (!q.empty())
    {
        int size = q.size();
        int flag = arr.size();
        while (size--)
        {
            if (q.front())
            {
                arr.push_back(q.front()->data);
                if (q.front()->left)
                    q.push(q.front()->left);
                if (q.front()->right)
                    q.push(q.front()->right);
            }

            q.pop();
        }
        if (i % 2 != 0)
        {
            reverse(arr.begin() + flag, arr.end());
        }
        i++;
    }
    return arr;
}
