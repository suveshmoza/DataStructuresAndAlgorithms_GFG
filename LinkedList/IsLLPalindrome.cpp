Node *reverseLL(Node *start)
{
    Node *prev, *current, *next;
    prev = NULL;
    current = start;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

bool isPalindrome(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    fast = reverseLL(slow->next);
    while (head != NULL && fast != NULL)
    {
        if (fast->data != head->data)
        {
            return false;
        }
        fast = fast->next;
        head = head->next;
    }
    return true;
}