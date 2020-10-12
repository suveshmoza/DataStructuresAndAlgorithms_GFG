Node *reverseDLL(Node *head)
{
    Node *prev = nullptr;
    Node *current = head;
    Node *next;

    while (current != nullptr)
    {
        next = current->next;
        current->next = prev;
        current->prev = next;
        prev = current;
        current = next;
    }

    head = prev;
    return head;
}