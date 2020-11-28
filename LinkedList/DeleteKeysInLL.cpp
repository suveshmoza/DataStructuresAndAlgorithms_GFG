Node *deleteAllOccurances(Node *head, int x)
{
    Node *temp = head;
    while (head->data == x)
    {
        head = head->next;
    }
    while (temp->next != NULL)
    {
        if (temp->next->data == x)
        {
            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
        }
    }
    return head;
}