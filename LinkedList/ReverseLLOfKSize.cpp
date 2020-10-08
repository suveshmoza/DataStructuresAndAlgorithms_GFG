struct node *reverse(struct node *head, int k)
{
    //Initialize pointers to keep reversing and tracking
    node *prev, *current, *next;
    prev = NULL;
    current = head;
    int count = 0;
    //Reverse upto k nodes using the same logic
    while (current != NULL && count < k)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
    //Now reverse next k nodes recurively while we reach end
    if (next != NULL)
    {
        head->next = reverse(next, k);
    }
    //return prev as it is the new head
    return prev;
}