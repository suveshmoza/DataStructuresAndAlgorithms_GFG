int GetNth(struct node *head, int index)
{
    node *temp = head;
    int count = 1;
    while (temp != NULL)
    {
        if (count == index)
        {
            return temp->data;
        }
        count++;
        temp = temp->next;
    }
}