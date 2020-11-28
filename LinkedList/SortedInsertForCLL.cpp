Node *sortedInsert(Node *head, int x)
{
    Node *current = head;
    Node *temp = new Node(x);
    if (current == NULL)
    {
        temp->next = temp;
        head = temp;
    }
    else if (current->data >= temp->data)
    {
        while (current->next != head)
        {
            current = current->next;
        }
        current->next = temp;
        temp->next = head;
        head = temp;
    }
    else
    {
        while (current->next != head && current->next->data < temp->data)
        {
            current = current->next;
        }
        temp->next = current->next;
        current->next = temp;
    }
    return head;
}