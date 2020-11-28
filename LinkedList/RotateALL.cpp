Node *rotate(Node *head, int k)
{
    int count = 1;
    Node *temp = head;
    while (count < k)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
        return head;
    Node *newHead = temp->next;
    temp->next = NULL;
    Node *temp2 = newHead;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = head;
    return newHead;
}
