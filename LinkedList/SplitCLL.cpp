void splitList(Node *head, Node **head1, Node **head2)
{
    Node *slow = head;
    Node *fast = head;
    while (fast->next != head && fast->next->next != head)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    if (fast->next->next == head)
    {
        fast = fast->next;
    }
    *head1 = head;
    if (head->next != head)
    {
        *head2 = slow->next;
    }
    fast->next = slow->next;
    slow->next = head;
}