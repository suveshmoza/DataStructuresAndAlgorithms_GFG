bool compute(Node *root)
{
    string res;
    while (root != NULL)
    {
        res += root->data;
        root = root->next;
    }
    int n = res.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (res[i] != res[n - i - 1])
            return false;
    }
    return true;
}