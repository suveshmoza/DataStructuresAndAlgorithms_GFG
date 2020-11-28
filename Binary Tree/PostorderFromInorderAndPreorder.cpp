int search(int arr[], int start, int end, int data)
{
    int i = 0;
    for (int i = start; i <= end; i++)
    {
        if (arr[i] == data)
            return i;
    }
    return i;
}

void postorder(int in[], int pre[], int start, int end, vector<int> &post, int &preindex)
{
    if (start > end)
        return;
    int data = pre[preindex++];
    if (start == end)
    {
        post.push_back(data);
        return;
    }
    int inindex = search(in, start, end, data);

    postorder(in, pre, start, inindex - 1, post, preindex);
    postorder(in, pre, inindex + 1, end, post, preindex);
    post.push_back(data);
}

void printPostOrder(int in[], int pre[], int n)
{
    int preindex = 0;
    vector<int> post;
    postorder(in, pre, 0, n - 1, post, preindex);

    for (int i = 0; i < post.size(); i++)
    {
        cout << post[i] << " ";
    }
}