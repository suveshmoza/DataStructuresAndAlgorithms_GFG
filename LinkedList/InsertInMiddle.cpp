Node *insertInMiddle(Node *head, int x)
{
    Node *temp = new Node(x);
    Node *fast = head;
    Node *slow = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    temp->next = slow->next;
    slow->next = temp;
    return head;
}