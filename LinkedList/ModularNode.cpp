int modularNode(Node *head, int k)
{
    Node *temp = head;
    int ans = -1, n = 0;
    while (temp != NULL)
    {
        n++;
        if ((n % k) == 0)
        {
            ans = temp->data;
        }
        temp = temp->next;
    }
    return ans;
}