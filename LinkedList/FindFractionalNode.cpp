int fractional_node(struct Node *head, int k)
{
    Node *current = head;
    int length = 0;
    while (current->next)
    {
        length++;
        current = current->next;
    }
    int key = length / k;
    current = head;
    while (key--)
    {
        current = current->next;
    }
    return current->data;
}
