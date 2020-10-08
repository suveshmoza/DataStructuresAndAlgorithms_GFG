struct Node *reverseList(struct Node *head)
{
    Node *prev, *ptr, *next;
    prev = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        next = ptr->next;
        ptr->next = prev;
        prev = ptr;
        ptr = next;
    }
    return prev;
}