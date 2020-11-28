struct Node *reverseList(Node *head)
{
    Node *prev, *current, *next;
    prev = NULL;
    current = head;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

struct Node *addTwoLists(struct Node *first, struct Node *second)
{
    first = reverseList(first);
    second = reverseList(second);
    Node *res = NULL;
    Node *temp, *prev = NULL;
    int sum, carry = 0;
    while (first != NULL || second != NULL)
    {
        sum = carry + (first ? first->data : 0) + (second ? second->data : 0);
        carry = (sum >= 10) ? 1 : 0;
        sum = sum % 10;
        temp = new Node(sum);

        if (res == NULL)
        {
            res = temp;
        }
        else
        {
            prev->next = temp;
        }
        prev = temp;

        if (first)
        {
            first = first->next;
        }
        if (second)
        {
            second = second->next;
        }
    }
    if (carry > 0)
    {
        temp->next = new Node(carry);
    }
    return reverseList(res);
}
