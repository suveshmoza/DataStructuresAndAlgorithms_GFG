void deleteAlt(struct Node *head)
{
    Node *current = head, *prev;
    int count = 0;
    while (current != NULL)
    {
        count++;
        if (count % 2 != 0)
        {
            prev = current;
            current = current->next;
        }
        else
        {
            prev->next = current->next;
            current = current->next;
        }
    }
}