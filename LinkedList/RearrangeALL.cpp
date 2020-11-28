Node *rearrangeEvenOdd(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *a = head, *b = head->next, *bhead = head->next;
    while (a != NULL && b != NULL && a->next != NULL && b->next != NULL)
    {
        a->next = b->next;
        a = a->next;
        b->next = a->next;
        b = b->next;
    }
    if (b != NULL)
        b->next = NULL;
    a->next = bhead;
    return head;
}