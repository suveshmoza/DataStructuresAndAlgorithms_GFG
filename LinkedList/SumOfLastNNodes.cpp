int sumOfLastN_Nodes(struct Node *head, int n)
{
    int count = 0;
    Node *current = head;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    int sum = 0;
    int index = count - n;
    current = head;
    while (current != NULL && index--)
    {
        current = current->next;
    }
    while (current != NULL)
    {
        sum += current->data;
        current = current->next;
    }
    return sum;
}