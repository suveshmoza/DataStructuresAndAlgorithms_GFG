Node *deleteNode(Node **head_ref, int x)
{
    Node *current = *head_ref;
    x--;
    while (x--)
        current = current->next;
    if (current->prev == NULL)
        *head_ref = current->next;
    else
        current->prev->next = current->next;
}