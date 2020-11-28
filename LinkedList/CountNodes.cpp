int getCount(struct Node *head)
{

    Node *current = head;
    int count = 0;
    while (current)
    {
        count++;
        current = current->next;
    }
    return count;
}