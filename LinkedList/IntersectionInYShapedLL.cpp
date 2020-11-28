int getNode(Node *a, Node *b, int d)
{
    Node *current1 = a;
    Node *current2 = b;

    for (int i = 0; i < d; i++)
    {
        if (current1 == NULL)
            return -1;
        current1 = current1->next;
    }
    while (current1 != NULL && current2 != NULL)
    {
        if (current1 == current2)
        {
            return current1->data;
        }
        current1 = current1->next;
        current2 = current2->next;
    }
    return -1;
}

int intersectPoint(Node *head1, Node *head2)
{
    Node *a = head1;
    Node *b = head2;
    int len1 = 0, len2 = 0;
    while (a != NULL)
    {
        len1++;
        a = a->next;
    }
    while (b != NULL)
    {
        len2++;
        b = b->next;
    }
    int d = abs(len1 - len2);
    a = head1;
    b = head2;
    if (len1 > len2)
    {
        return getNode(a, b, d);
    }
    else
    {
        return getNode(b, a, d);
    }
}
