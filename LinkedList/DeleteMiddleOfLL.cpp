Node *deleteMid(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    Node *prev = slow;
    Node *middle = NULL;
    while (fast != NULL && fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    middle = slow;
    prev->next = slow->next;
    free(middle);
    return head;
}