void Split(Node *head, Node **a, Node **b)
{
    Node *fast = head->next;
    Node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    *a = head;
    *b = slow->next;
    slow->next = NULL;
}

Node *sortedMerge(Node *head1, Node *head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    Node *result;
    if (head1->data < head2->data)
    {
        result = head1;
        result->next = sortedMerge(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = sortedMerge(head1, head2->next);
    }
    return result;
}

void sortList(Node **head)
{
    Node *current = *head;
    Node *a;
    Node *b;
    if ((current == NULL) || (current->next == NULL))
    {
        return;
    }
    Split(current, &a, &b);
    sortList(&a);
    sortList(&b);
    *head = sortedMerge(a, b);
}