int countNodes(struct Node *slow)
{
    int count = 1;
    Node *temp = slow;
    while (temp->next != slow)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int countNodesinLoop(struct Node *head)
{
    int count = 0;
    Node *slow = head;
    Node *fast = head;

    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return countNodes(slow);
        }
    }
    return 0;
}