struct Node *makeUnion(struct Node *head1, struct Node *head2)
{
    set<int> s;
    Node *curr1 = head1;
    while (curr1 != NULL)
    {
        s.insert(curr1->data);
        curr1 = curr1->next;
    }
    Node *curr2 = head2;
    while (curr2 != NULL)
    {
        s.insert(curr2->data);
        curr2 = curr2->next;
    }
    Node *head3 = NULL, *tail = NULL;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        if (head3 == NULL)
        {
            head3 = new Node(*it);
            tail = head3;
        }
        else
        {
            tail->next = new Node(*it);
            tail = tail->next;
        }
    }
    return head3;
}