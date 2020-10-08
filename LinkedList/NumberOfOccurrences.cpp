int count(struct node *head, int search_for)
{
    node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        if (temp->data == search_for)
        {
            count++;
        }
        temp = temp->next;
    }
    return count;
}