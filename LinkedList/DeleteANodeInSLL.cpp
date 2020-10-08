Node *deleteNode(Node *head, int x)
{
    if (head == NULL)
    {
        return head;
    }
    if (x == 1)
    {
        head = head->next;
        return head;
    }
    Node *temp = head;
    for (int i = 1; i < x - 1 & temp != NULL; i++)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}