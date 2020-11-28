struct node *update(struct node *start, int p)
{
    node *temp = start;
    p -= 1;
    while (p--)
    {
        temp = temp->next;
    }
    node *newStart = temp->next;
    node *temp2 = temp->next;
    temp->next = NULL;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = start;
    return newStart;
}