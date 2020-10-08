struct Node *addTwoListsUtil(struct Node *first, struct Node *second)
{
    Node *temp, *prev = NULL;
    int sum, carry = 0;
    Node *res = NULL;

    while (first != NULL || second != NULL)
    {
        sum = carry + (first->data) + (second->data);
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
            prev = temp;
        }
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

struct Node *addTwoLists(struct Node *first, struct Node *second)
{
    reverseList(first);
    reverseList(second);
    addTwoListsUtil(first, second);
}